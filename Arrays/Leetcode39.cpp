class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& candidates, int index, vector<int>& current, int remaining){
        
        if(remaining==0)
        {
            result.push_back(current);
            return;
        }
        if(remaining<0 || index>=candidates.size())
        {
            return;
        }
        current.push_back(candidates[index]);
        solve(candidates,index,current,remaining-candidates[index]);
        current.pop_back();

        solve(candidates,index+1,current,remaining);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        solve(candidates,0,current,target);
        return result;
    }
};
