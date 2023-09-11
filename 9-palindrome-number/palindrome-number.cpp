class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers are not palindrome
        if(x < 0){
            return false;
        }

        long long original = x;
        long long reserved = 0;

        while(x > 0){
            // Multiply the reversed number by 10 and 
            //add the last digit of the original number
            reserved = reserved * 10 + x % 10;
            //remove last digit
            x/=10;
        }
        return original == reserved;

    }
};