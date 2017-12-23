#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 0; i < s.length() ; i++){
        s[i]+=n;
        if(s[i] > 57){
            s[i]-=10;
        }
    }
    cout << s;
    return 0;
}
