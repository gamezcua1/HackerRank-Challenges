#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int x[n][n];
    
    for(int i = 0 ; i < n ; i++)
        for(int ii = 0 ; ii < n ;ii++)
            cin >> x[i][ii];
        
        
    int sum = 0;
    
    for(int i = 0, ii = 0 ; i < n ; i++, ii++ )
        sum += x[i][ii];
    
    for(int i = 0, ii = n-1 ; i < n ; i++, ii--)
        sum -= x[i][ii];
    
    
    if(sum < 0)
        sum *= -1;
    
    cout << sum;
        
        
    return 0;
}
