#include<iostream>
#include<cstring>
using namespace std;
const int N=2;
const int M=10000;
struct Trie_Node{
    Trie_Node* next[N];
    bool isTail;
    Trie_Node(){
        isTail=false;
        memset(next,NULL,sizeof(next));
    }
};
Trie_Node node[M];
class Trie{
public:
    Trie();
    void clear();
    bool Insert(char* word);
private:
    Trie_Node* root;
    int Node_Num;
};
Trie::Trie(){
    Node_Num=1;
    root=&node[0];
}
void Trie::clear(){
    for(int i=0;i<Node_Num;i++){
        node[i].isTail=false;
        memset(node[i].next,NULL,sizeof(node[i].next));
    }
    Node_Num=1;
}
bool Trie::Insert(char *word){
    char* tmp=word;
    Trie_Node* p=root;
    while(*word){
        int index=*word-'0';
        if(p->next[index]==NULL){
            p->next[index] = &node[Node_Num++];
        }
        p=p->next[index];
        if(p->isTail==true){return false;}
        word++;
    }
    p->isTail=true;
    for(int i=0;i<N;i++){
        if(p->next[i]!=NULL) {return false;}
    }
    return true;
}
int main(){
    Trie tree;

    int t=0;
    char a[20];
    bool islegal=true;
    while(cin>>a){
        if(!strcmp(a,"9")){
            if(islegal) cout<<"Set "<<++t<<" is immediately decodable"<<endl;
            else cout<<"Set "<<++t<<" is not immediately decodable"<<endl;
            tree.clear();
            islegal=true;
            continue;
        }
        if(!islegal) continue;
        if(!tree.Insert(a)) islegal=false;
    }
    return 1;
}
