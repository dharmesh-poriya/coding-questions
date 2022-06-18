class WordFilter {
private:
    unordered_map<string, int> mp;
public:
    WordFilter(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            string word = words[i];
            string revword = word;
            reverse(revword.begin(),revword.end());
            string prefix = "";
            for(char pre : word){
                prefix.push_back(pre);
                string suffix = "";
                for(char suf : revword){
                    suffix = suf+suffix;
                    string temp = prefix + "$" + suffix;
                    mp[temp] = i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string temp = prefix + "$" + suffix;
        if(0!=mp[temp]){
            return mp[temp]-1;
        }
        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */

