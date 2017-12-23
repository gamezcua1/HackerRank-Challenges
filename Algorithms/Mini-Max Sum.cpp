#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<long int>ar;
    for(int i = 0; i < 5; i++){
        int a;cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    long int mx = 0,min = 0;
    for(int i = 1; i <= 4; i++)mx+=ar[i];
    for(int i = 0; i < 4; i++)min+=ar[i];
    cout << min << " " << mx << endl;
    return 0;
}
