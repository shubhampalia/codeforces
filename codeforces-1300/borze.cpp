#include<bits/stdc++.h>
using namespace std;

int main(){
    string code;
    cin>>code;
    string s;
    for(int i=0; i<code.size(); i++){
        if(code[i] == '.'){
            s+='0';
        }
        else{
            if(code[i+1] == '.'){
                s+='1';
                i++;
            }
            else{
                s+= '2';
                i++;
            }
        }
    }
    cout<<s;
}