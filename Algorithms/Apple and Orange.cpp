#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,t,a,b,z,y;        // a ---> s <----> t <----b
    cin >> s >> t;
    cin >> a >> b;
    cin >> z >> y;
    int m[z];
    for(int i = 0 ; i < z ; i++) cin >> m[i];
    int n[y];
    for(int i = 0 ; i < y ; i++) cin >> n[i];
    
    
    int contsMan = 0;
    for(int i = 0 ; i < z ; i++){
        int dis = m[i] + a;
        if(dis >= s && dis <= t)
            contsMan++;
    }
    
    int contsNar = 0;
    for(int i = 0 ; i < y ; i++){
        int dis = n[i] + b;
        if(dis >= s && dis <= t)
            contsNar++;
    }
        
    cout << contsMan << endl;
    cout << contsNar << endl;
    
    
    return 0;
}