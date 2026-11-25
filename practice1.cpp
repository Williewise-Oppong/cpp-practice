#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> grid = {{1,2,3},{4,5,6}};

    for(int i =0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            cout<<grid[i][j];
        }
    }

    int a[2][2] = {1,2,3,4};

    

    return 0;
}