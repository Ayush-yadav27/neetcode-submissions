class Solution {
   public:
    bool isPalindrome(string s) {
        string str = "";
        for (char x : s) {
            if (isdigit(x) || isalpha(x)) {
                x=tolower(x);
                str += x;
            }
        }
        int l = 0;
        int r = str.length()-1;
        while (l <= r) {
            if (str[l] != str[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
