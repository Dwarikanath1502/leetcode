class Solution {

void findCombination(int index, int target, vector<int> &ds, vector<int> &candidates, vector<vector<int>> &ans)
{
    if(index == candidates.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    // include
    if(candidates[index] <= target){
        ds.push_back(candidates[index]);
        findCombination(index, target - candidates[index], ds, candidates, ans);
        ds.pop_back();
        
    }
    // exclude
    findCombination(index + 1, target, ds, candidates, ans);
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        findCombination(index, target, ds, candidates, ans);
        return ans;
    }
};