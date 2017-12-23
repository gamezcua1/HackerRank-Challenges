#include <bits/stdc++.h>
using namespace std;
#define MAX 100002
#define MAXN 62
struct node {
    bool fin;
    int c;
    int sons[12];
};
node trie[MAX*MAXN];
int n;
int m=1;
string v;
bool ok;
void add(){
    int pos=1;
    for(int i=0;i<v.size();i++){
        int l=(v[i]-'a');
        if(!trie[pos].sons[l])trie[pos].sons[l]=++m;
        pos=trie[pos].sons[l];
        if(trie[pos].c&&i==v.size()-1)ok=true;
        trie[pos].c++;
        if(trie[pos].fin)ok=true;
    }
    trie[pos].fin=true;
}
int main() {
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        add();
        if(ok){
            cout <<"BAD SET\n";
            cout <<v<<"\n";
            return 0;
        }
    }
    cout <<"GOOD SET\n";
}
