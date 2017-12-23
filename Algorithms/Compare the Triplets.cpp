#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int A[3];
    int B[3];
    
    for(int i  = 0 ; i < 3 ; i++)
        cin >> A[i];
    
    for(int i = 0 ; i < 3 ;i++)
        cin >> B[i];
    
    int x = 0, y = 0;
    for(int i = 0 ; i < 3 ;i++){
        if(B[i] > A[i])
            y++;
        else if(B[i] < A[i])
            x++;
    }
    
    cout << x <<" "<<y;
    
    
    
    return 0;
}