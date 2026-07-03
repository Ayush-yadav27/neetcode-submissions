class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> grp;
        for(string i : strs){
            string wrd=i;
            sort(wrd.begin(),wrd.end());
            grp[wrd].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i : grp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
