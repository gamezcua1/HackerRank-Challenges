#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    queue<int> cola;
    int q;
    cin >> q;
    
    int s;
    for(int i = 0 ; i < q ;i++){
        cin >> s;
        if(s == 1){
            int n;
            cin >>n;
            cola.push(n);
        }
        else if(s == 2){
            cola.pop();
        }
        else if(s == 3){
            cout << cola.front() << endl;
                
        }
    }
    
    
    return 0;
}
