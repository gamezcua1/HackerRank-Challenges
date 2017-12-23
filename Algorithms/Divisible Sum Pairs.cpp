#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> a;
    int n, k; cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x; a.push_back(x);
    }
    
    int cont = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int m = a[i] + a[j];
            if(m%k == 0 && i< j)cont++;
        }
    }
    
    cout << cont;
    return 0;
}
