#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
  int n=nums.size();
  sort(nums.begin(),nums.end());
  int closetsum=nums[0]+nums[1]+nums[2];
  for(int i=0;i<n;i++){
      int j=i+1;
      int k=n-1;
      while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
          if(sum==target)return target;
          if(abs(sum-target)<abs(closetsum-target)){
              closetsum=sum;
          }
          if(target>sum)j++;
          else{
              k--;
          }
      }
  }
  return closetsum;
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
    int target;
    cin>>target;


    cout<<threeSumClosest(v,target);
 
}