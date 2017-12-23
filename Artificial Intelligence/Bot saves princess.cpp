#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int x = n/2;
    if(grid[0][0] == 'p'){
        for(int i = 0 ; i < x ; i++){
            cout << "UP" << endl;
        }
        for(int i = 0 ; i < x ; i++)
            cout << "LEFT" << endl;
        return;
    }
    if(grid[0][n-1] == 'p'){
        for(int i = 0 ; i < x ; i++){
            cout << "UP" << endl;
        }
        for(int i = 0 ; i < x ; i++)
            cout << "RIGHT" << endl;
        return;
    }
    if(grid[n-1][0] == 'p'){
        for(int i = 0 ; i < x ; i++){
            cout << "DOWN" << endl;
        }
        for(int i = 0 ; i < x ; i++)
            cout << "LEFT" << endl;
        return;
    }
    if(grid[n-1][n-1] == 'p'){
        for(int i = 0 ; i < x ; i++){
            cout << "DOWN" << endl;
        }
        for(int i = 0 ; i < x ; i++)
            cout << "RIGHT" << endl;
        return;
    }
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}