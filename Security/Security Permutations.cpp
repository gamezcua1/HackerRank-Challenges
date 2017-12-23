#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n+2];
    for(int i = 1 ; i <= n ; i++){
        cin>>a[i];
    }

    for(int j = 1 ; j <= n ; j++){
        cout << a[a[j]] << endl;
    }
    return 0;
}