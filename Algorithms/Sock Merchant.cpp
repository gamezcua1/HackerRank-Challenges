#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> a;
int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x; a.push_back(x);
    }
    
    int arr[102] = {0};
    for(int i = 0 ; i < n ; i++){
        arr[a[i]] ++;
    }
    
    int con = 0;
    for(int i = 0 ; i < 102 ; i++){
        while(arr[i] > 1){
            arr[i]-=2;
            con++;
        }
    }
    
    cout << con;
    return 0;
}