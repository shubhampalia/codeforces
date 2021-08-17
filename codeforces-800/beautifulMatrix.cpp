#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat;
    for(int i=0; i<5; i++){
        vector<int> temp;
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }


    int x,y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j] != 0){
                x=i;
                y=j;
            }
        }
    }
    int res = abs(2-x) + abs(2-y);
    cout<<res;
    
}