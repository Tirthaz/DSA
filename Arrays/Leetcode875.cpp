class Solution {
public:
long long calculatetotal(vector<int>& piles,int speed)
{
    long long totalH=0;
    for(int bananas:piles)
    {
        totalH+=(bananas + speed - 1) / speed;
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile= *max_element(piles.begin(),piles.end());
        int low=1,high=maxpile;
        int ans=maxpile;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long totalH=calculatetotal(piles,mid);
            if(totalH<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
