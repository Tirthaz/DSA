#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        vector<int> unionArr;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j])
            {
                if(unionArr.size()==0 || 
                unionArr.back() != nums1[i]){
                    unionArr.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(unionArr.size()==0 || 
                unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
        }

        while(j<n2)
        {
            if(unionArr.size()==0 || 
                unionArr.back() != nums2[j]){
                    unionArr.push_back(nums2[j]);
            }
            j++;
        }
        while(i<n1){
            if(unionArr.size()==0 || 
                unionArr.back() != nums1[i]){
                    unionArr.push_back(nums1[i]);
            }
            i++;
        }

        return unionArr;
    }
};

int main()
{
    vector<int> nums1={1,1,2,3,4,5};;
    vector<int> nums2={1,2,3,4,4,5,6};;
    Solution obj;
    vector<int> result=obj.unionArray(nums1,nums2);
    cout<<"union of arrays: ";
    for(int val:result)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;

}
