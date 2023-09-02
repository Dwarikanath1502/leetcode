    class Solution {
    public:
        bool isIsomorphic(string s, string t) {
        // get the size of both the string as size is not same then can't be isomorphic
        int length1 = s.length();
        int length2 = t.length();

        // if length is not equal
        if(length1 != length2){
            return false;
        }

        char mp1[256] = {};
        char mp2[256] = {};

        for(int i = 0; i < length1; i++){
            //if element is not there then map
            if(!mp1[s[i]] && !mp2[t[i]]){
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            // if present but not match
            else if(mp1[s[i]] != t[i]){
                return false;
            }
        }
        return true;
        }
    };