#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

stack<int> s;

int print(){
    stack<int>q = s;
    int temp = 0;
    while(!q.empty()){
        if(q.top() > temp)
            temp = q.top();
            
        q.pop();
    }
    return temp;
}

int mayor = 0;
int main() {
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        
        if(x == 1){
            int c; cin >> c; s.push(c);
            if(c > mayor) mayor = c;
        }
        else if(x == 2){
            int temp = s.top();
            s.pop();
            if(temp == mayor){
                mayor = print();
            }
        }
        else if(x == 3)
            cout << mayor << endl;
            
    }
    
    return 0;
}
