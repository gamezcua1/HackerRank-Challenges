#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void check(string s){
    stack<char>q;
    
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        switch(c){
            case '{':
            case '(':
            case '[':
                q.push(c);
                break;
            case '}':
                if(q.empty() || q.top() != '{'){
                    cout << "NO" << endl;
                    return;
                }
                else    q.pop();
                break;
            case ')':
                if(q.empty() || q.top() != '('){
                    cout << "NO" << endl;
                    return;
                }
                else q.pop();
                break;
           case ']':
                if(q.empty() || q.top() != '['){
                    cout << "NO" << endl;
                    return;
                }
                else q.pop();
                break;
        }
        
    }
    if(!q.empty())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}
