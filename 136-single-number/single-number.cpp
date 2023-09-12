class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>mp;

        // push all the elements to map and keep its count
        for(auto it : nums){
            mp[it]++;
        }

        // check if an element occuring once then return it
        for(auto it : mp){
            if(it.second == 1){
                return it.first;
            }
        }
        // if element with exact count 1 is not present return -1
        return -1;
    }
};