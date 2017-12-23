#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    vector <ll> a;
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x; a.push_back(x);
    }
    
    int cMay = 0, cMin = 0;
    
    ll mayor = a[0], menor = a[0];
    for(int i = 1 ; i < n ; i++){
        if(a[i] > mayor){
            cMay++; mayor = a[i];
        }
        if (a[i] < menor){
            cMin++; menor = a[i];
        }
    }
    
    cout << cMay << " " << cMin; 
     
    return 0;
}