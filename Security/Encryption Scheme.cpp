#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int s = 1;
    for(int i = 1 ; i <= n; i++)
        s*=i;
    cout << s;
    return 0;
}