class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        unordered_map<string,set<string>> mp;
        for(string s : products){
            string prefix = "";
            for(char ch : s){
                prefix.push_back(ch);
                mp[prefix].insert(s);
            }
        }
        
        string search = "";
        vector<vector<string>> ans;
        for(char ch : searchWord){
            search.push_back(ch);
            vector<string> temp;
            int count = 0;
            for(auto it : mp[search]){
                count ++;
                temp.push_back(it);
                if(3==count)
                    break;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};