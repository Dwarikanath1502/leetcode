class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0;
       int element;

       for(int i= 0; i < nums.size(); i++){
           if(count == 0){
               element = nums[i];
               count++;
           }else if(element == nums[i]){
               count++;
           }else{
               count--;
           }
       }
       // at last element will holding the elment which is there maximum number of time
       return element;
    }
};