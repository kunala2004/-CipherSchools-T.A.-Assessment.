#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
        
          int n = nums.size();
        if(n==1){
            return nums[0];
        }
      else{
       int dp[n];
        for(int i=0;i<n;i++){
            dp[i] = 0;
        }
        dp[0] = nums[0];
        dp[1]= max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            
                dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
            
        }
        
        return dp[n-1];
    }
    }

int main()
{
    int n;
    cin>>n;
    vector<int> v;
  //  v.resize(n);
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    cout<<rob(v);
 
}