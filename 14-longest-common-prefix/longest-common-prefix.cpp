class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();

        sort(strs.begin(), strs.end());
        
        string str1 = strs[0];
        string str2 = strs[size - 1];

        int index = 0;

        while(index < str1.length() && str1[index] == str2[index]){
            index++;
        }

        return index == 0 ? "" : str1.substr(0, index);
    }
};
