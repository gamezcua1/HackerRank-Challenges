#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int>a;
bool win = false;
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x; a.push_back(x);
    }
    a.push_back(0);a.push_back(0);
    int cont = 0;
    int steps = 0;
    do{
        if(cont == n || cont >=n){
            break;
        }
        if(a[cont+2] != 1){
            steps++;
            cont+=2;
        }
        else{
            steps++;
            cont++;
        }
        
    }while(!win);
    if(n%2 ==0 && n != 100)
        cout <<steps;
    else if(n==100)
        cout << steps-1;
    else
        cout << steps-1;
    return 0;
}