#include <bits/stdc++.h>
using namespace std;


int missingNumber(vector<int> &nums) {
         int n = nums.size();
         int total = n*(n+1)/2;
         for(int i=0;i<n; i++){
                 total -= nums[i];
         }
         return total;
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
   
    cout<<missingNumber(v);
 
}