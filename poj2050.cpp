#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#define MAX_LINES 2048
#define MAX_LINE_LEN 128
#define MAX_DOCS 128
#define MAX_WORDS 65536
#define MAX_WORDS_PER_LINE 128
struct node {
    int doc, line;
    struct node *next;
};
char lines[MAX_LINES][MAX_LINE_LEN];
int docs[MAX_DOCS][MAX_LINES];
int docs_cnt;
unsigned int occur[MAX_DOCS][(MAX_WORDS + 31) / 32];
unsigned int hash[MAX_WORDS];
struct node nodes[MAX_WORDS], *head[MAX_WORDS], *tail[MAX_WORDS];
int nodes_cnt;
inline unsigned int strhash(char *str, int len)
{
	unsigned int h = 0;
    while (len--) {
        h *= 31;
        if (*str >= 'A' && *str <= 'Z') h += *str - 'A' + 'a';
        else h += *str;
        str++;
    }
    return h;
}
inline unsigned int test_bit(unsigned int *arr, int idx)
{
    return arr[idx >> 5] & (1 << (idx & 0x1f));
}
inline void set_bit(unsigned int *arr, int idx)
{
    arr[idx >> 5] |= 1 << (idx & 0x1f);
}
inline int split(char *line, char **strs, int *lens)
{
    int cnt = 0;
    while (*line) {
        while (*line && !isalpha(*line)) line++;
        if (!*line) break;
        *strs++ = line;
        for (*lens = 0; isalpha(*line); (*lens)++)
            line++;
        lens++;
        cnt++;
    }
    return cnt;
}

inline int find(unsigned int h)
{
    int i = h % MAX_WORDS;
    while (hash[i] && hash[i] != h)
        i = (i + 1) % MAX_WORDS;
    return i;
}
inline void insert(char *str, int len, int doc, int line)
{
    unsigned int h = strhash(str, len);
    int i = find(h);
    struct node *t = &nodes[nodes_cnt++];
    hash[i] = h;
    t->doc = doc;
    t->line = line;
    if (!head[i]) head[i] = t;
    else tail[i]->next = t;
    tail[i] = t;
    set_bit(occur[doc], i);
}
int output_cnt, last_doc;
inline void output(int doc, int line)
{
    if (last_doc == -1)
        last_doc = doc;
    if (last_doc != doc) {
        printf("----------\n");
        last_doc = doc;
    }
    printf("%s\n", lines[docs[doc][line]]);
    output_cnt++;
}
struct node *List[MAX_LINES];
inline void mark_one(int id, int doc)
{
    struct node *t;
    for (t = head[id]; t; t = t->next)
        if (doc == -1 || t->doc == doc)
            List[docs[t->doc][t->line]] = t;
}
inline void dump_List()
{
    int i;
    for (i = 0; i < MAX_LINES; i++)
        if (List[i])
            output(List[i]->doc, List[i]->line);
}
inline void search_one(int id)
{
    memset(List, 0, sizeof(List));
    mark_one(id, -1);
    dump_List();
}
inline void search_and(int id1, int id2)
{
    int i;
    memset(List, 0, sizeof(List));
    for (i = 0; i < docs_cnt; i++)
        if (test_bit(occur[i], id1) && test_bit(occur[i], id2)) {
            mark_one(id1, i);
            mark_one(id2, i);
        }
    dump_List();
}
inline void search_or(int id1, int id2)
{
    memset(List, 0, sizeof(List));
    mark_one(id1, -1);
    mark_one(id2, -1);
    dump_List();
}
inline void search_not(int id)
{
	int i, j;
    for (i = 0; i < docs_cnt; i++)
        if (!test_bit(occur[i], id))
            for (j = 0; docs[i][j]; j++)
                output(i, j);
}
int main()
{
    int i, j, k, c, n, l = 1, lens[MAX_WORDS_PER_LINE], id[8];
    char *strs[MAX_WORDS_PER_LINE];
    scanf("%d", &docs_cnt);
	getchar();
    for (i = 0; i < docs_cnt; i++) {
		for (j = 0; gets(lines[l]), strcmp(lines[l], "**********"); j++, l++) {
            docs[i][j] = l;
            c = split(lines[l], strs, lens);
            for (k = 0; k < c; k++)
                insert(strs[k], lens[k], i, j);
        }
    }
    scanf("%d", &n);
	getchar();
    while (n--) {
        gets(lines[l]);
        c = split(lines[l], strs, lens);
        output_cnt = 0;
        last_doc = -1;
        for (i = 0; i < c; i++)
            id[i] = find(strhash(strs[i], lens[i]));
        if (c == 1) search_one(id[0]);
        else if (c == 2) search_not(id[1]);
        else if (strs[1][0] == 'A') search_and(id[0], id[2]);
        else search_or(id[0], id[2]);
        if (!output_cnt) printf("Sorry, I found nothing.\n");
        printf("==========\n");
    }
    return 0;
}
