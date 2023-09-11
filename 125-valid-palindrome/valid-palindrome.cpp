class Solution {
public:
    bool isPalindrome(string s) {   
       string str = "";
       //convert all uppercase letter to lowercase
       for(auto it: s){
           str += tolower(it);
       }
       int left = 0;
       int right = str.size() - 1;

       while(left < right){
        //    skip non alphanumeric character from left
           while(left < right && !isalnum(str[left])){
               left++;
           }
           // skip non alphanumeric character from right
           while(left < right && !isalnum(str[right])){
               right --;
           }
           //if left and right character is not same return false
           if(str[left] != str[right]){
               return false;
           }
        //    if same move both pointer
           left++;
           right--;
       }
        return true;
    }
};