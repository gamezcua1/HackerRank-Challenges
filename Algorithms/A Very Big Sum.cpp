#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    long long num[n];
    
    for(int i = 0 ; i < n ; i++)
        cin >> num[i];
        
    long long int sum = 0;
    for(int i = 0 ; i < n ;i++)
        sum += num[i];
    
    cout << sum;
    
    return 0;
}
