class Solution {
    private:
    void findSubsets(int index, vector<int> nums, vector<int> output, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }
        // exclude call
        findSubsets(index + 1, nums, output, ans);

        // include call
        int element = nums[index];
        output.push_back(element);
        findSubsets(index + 1, nums , output, ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        int index = 0;
        findSubsets(index, nums, output, ans);
        return ans;
    }
};