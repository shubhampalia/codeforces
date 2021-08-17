#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>> res, int n){
    if(n==0) return true;
    int sumx=0, sumy=0, sumz=0;
    for(int i=0; i<n; i++){
        sumx += res[i][0];
        sumy += res[i][1];
        sumz += res[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0)
        return true;
    else
        return false;
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> res;
    for(int i =0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<3; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        res.push_back(temp);
    }
    bool ans = solve(res, n);
    if(ans == true) cout<<"YES";
    else cout<<"NO";

    
    
}