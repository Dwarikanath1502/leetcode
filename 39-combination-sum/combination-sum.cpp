class Solution {

	void findCombinations(int index, int target, vector<int> ds, vector<int> combinations, vector<vector<int>> &ans)
		{
			if(index == combinations.size())
			{
				if(target == 0)
				{
					ans.push_back(ds);
				}
		return ;
		}
		//include call
		if(combinations[index] <= target)
		{
			ds.push_back(combinations[index]);
			findCombinations(index, target - combinations[index], ds, combinations,     ans);
		ds.pop_back();
		}

		//exclude call
		findCombinations(index + 1, target, ds, combinations, ans);
	}


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        findCombinations(index, target, ds, candidates, ans);
        return ans;
    }
};