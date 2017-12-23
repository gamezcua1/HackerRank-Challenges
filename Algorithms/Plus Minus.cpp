#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int x[n];
    for(int i = 0 ; i < n ; i++)
        cin >> x[i];
    
    double pos = 0, neg = 0, zero = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(x[i] == 0){
            zero++;
        }
        else if(x[i] > 0)
            pos++;
        else if(x[i] < 0)
            neg++;
    }
    
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zero/n << endl;
    
    
    return 0;
}
