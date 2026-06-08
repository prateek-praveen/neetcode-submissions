class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<n;i++){
            int freq[26]={0};
           
            
           int m = strs[i].length();
           for(int j=0;j<m;j++){
            freq[strs[i][j]-'a']++;
           }
           string key;
            for (int k = 0; k < 26; k++) {
                key += to_string(freq[k]) + "#";
            }

            mp[key].push_back(strs[i]);

        }
         vector<vector<string>> res;
        for (auto& it : mp) {
            res.push_back(it.second);
        }
        return res;
    }
};