#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    long int x[n];
    for(int i = 0 ; i < n ; i++)
        cin >> x[i];
    
    long int mayor = 0;
    for(int i = 0 ; i < n ; i++){
        if(x[i] > mayor){
            mayor = x[i];
        }
    }
    long int cont = 0;
    for(int i = 0 ; i < n ; i++)
        if(x[i] == mayor)
            cont++;
    cout <<  cont;
    
    return 0;
}
