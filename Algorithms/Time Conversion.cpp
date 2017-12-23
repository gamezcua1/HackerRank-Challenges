#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;


int main() {
    char hora[10];
    for(int i = 0 ; i < 10 ; i++)
        cin >> hora[i];
    
    if(hora[8] == 'A'){
        if(hora[0] == '1'){
            hora[0] = 48;
            hora[1] = 48;
        }
        for(int i = 0 ; i < 8 ; i++)
            cout << hora[i];
    }
    else{
        if((hora[0] == '1' && hora[1] == '2') || (hora[0] == '2')){
            
        }
        else{
         
        int h1 = hora[0] - 48;
        int h2 = hora[1] - 48;
        
        h2 += 2;
        if(h2 >= 10){
            h2-=10;
            h1++;
        }
        h1++;
        
        hora[0] = int(h1)+48;
        hora[1] = int(h2)+48;
           
        }
        for(int i = 0 ; i < 8 ; i++)
            cout << hora[i];
    }        
    
    return 0;
}
