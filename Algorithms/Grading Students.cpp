#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int grades[21] = {0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};

int promediar(int x){
    if(x < 38)
        return x;
    else{
        for(int i = 0 ; i < 21 ; i++){
            if(grades[i] < x && grades[i+1] > x){
                int rest = grades[i+1] - x;
                if(rest < 3){
                    return grades[i+1];
                }
                else if(rest == 3)
                    return x;
            }   
        }
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    int x[n];
    for(int i = 0 ; i < n ; i++)
        cin >> x[i];
    
    for(int i = 0 ; i < n ; i++)
        cout << promediar(x[i]) << endl;
    
    
    return 0;
}