class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>> ans;

        for (int i = 0; i < strs.size(); i++){
            string t = strs[i];
            sort(t.begin(),t.end());
            ans[t].push_back(strs[i]);
        }

        vector<vector<string>> anagrams;

        for (auto p: ans){
            anagrams.push_back(p.second);
        }

        return anagrams;
    }
};