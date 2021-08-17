#include<bits/stdc++.h>
using namespace std;
//NOT ACCEPTED
class solution
{
    public:
    long long maxProductOfTwo(vector<int> nums, int n)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        long long res = nums[0]*nums[n-1];
        return res;
    }
    
};

int main(){
    int N;
    cin>>N;
    for(int i =0; i<N; i++)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        solution obj;
        long long res = obj.maxProductOfTwo(a, n);
        cout<<"Ans = " <<res<<endl;
    }
    
}