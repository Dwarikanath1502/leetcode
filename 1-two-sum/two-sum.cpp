class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //map to store element and the index
      unordered_map<int, int> mp;
      int size = nums.size();

      for(int i = 0; i < size; i++)
      {
          //find0t he difference
          int value = target - nums[i];
          // check if present

          if(mp.find(value) != mp.end()){
              return {mp[value] , i};
          }
          mp[nums[i]] = i;
      }
      return {};
     }
};


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i< nums.size(); i++){
//             for(int j = i + 1; j < nums.size();j++)
//             {
//                 if(nums[i] + nums[j] == target){
//                     return {i, j};
//                     break;
//                 }
//             }
//         }
//         return {};
//     }
// };