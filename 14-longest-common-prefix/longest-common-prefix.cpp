class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int size = strs.size();

        // sort the vector
        sort(strs.begin(), strs.end());

        string str1 = strs[0];
        string str2 = strs[size - 1];
        // index initially point to first character
        int index = 0;

        // as we sorted the vector, so the string with less character at first
        // that's why index < str1.size
        while(index < str1.size()){
          if(str1[index] == str2[index]){
                index++;
          }else{
              break;
          }
        }

        return index == 0 ? "" : str2.substr(0, index);
        

    }
};
