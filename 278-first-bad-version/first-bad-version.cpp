// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //if only in element
        if (n == 1){
            return n;
        }
        int start = 1;
        int end = n;

        while(start < end){
            int mid = start + (end - start) / 2;
            if(isBadVersion(mid)){
                end = mid;
            }else{
                start = mid + 1;
            }
        }
        return start;
    }
};