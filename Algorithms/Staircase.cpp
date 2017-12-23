#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = i ; i < n ; i++){
        int s = n-i-1;
        for(int ii = 0 ; ii < s ; ii++)
            cout << " ";
        for(int ii = 0 ; ii <= i ; ii++)
            cout << "#";
        
        cout << endl;
    }
        
    return 0;
}