#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubArray(vector<int>& nums) {
        long long sum=0,maxi=LONG_MIN;
        int n=nums.size();
        int ansstart=-1, ansend=-1,start=0;
        for(int i=0;i<n;i++)
        {
            if(sum==0) start=i;
            sum+=nums[i];

            if(sum>maxi){
                maxi=sum;
                ansstart=start,ansend=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};

int main()
{
  int n;
  cout<<"Enter the no of elements of array:  ";
  cin >> n;

  vector<int> nums(n);
  cout<<"enter the elements of array: ";
  for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  }
  Solution obj;
  long long result= obj.maxSubArray(nums);
  cout<<"maximum subarray sum is: "<<result;
  return 0;
}
