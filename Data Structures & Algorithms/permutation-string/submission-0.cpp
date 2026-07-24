class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int l = s2.length();
        if (n > l) return false;
        vector <int> s1freq(26, 0), s2freq(26, 0);
        for (char ch : s1) {
            s1freq[ch - 'a']++;
        }
        for (int i=0;i<n;i++) {
            s2freq[s2[i] - 'a']++;
        }
        if (s1freq == s2freq) return true;

        for (int i = n; i < l; i++) {
            s2freq[s2[i] - 'a']++;
            s2freq[s2[i - n] - 'a']--;
            if (s1freq == s2freq) return true;
        }
        return false;
    }
};
