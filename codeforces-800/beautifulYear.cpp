#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int year=n;
    int flag=0;
    while(flag == 0)
    {
        year = year+1;
        int w = year/1000;
        int x = (year%1000) /100;
        int y = (year%100) /10;
        int z = year%10;
        if(w!=x && w!=y && w!=z && x!=y && x!=z && y!=z ){
            flag=1;
            break;
        }
    }
    cout<<year;
}