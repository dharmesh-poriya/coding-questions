class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s1(words.begin(),words.end());
        set<string> s2(words.begin(),words.end());
        
        for(string s : s1){
            for(int i=1;s.size()>i;i++){
                s2.erase(s.substr(i));
            }
        }
        
        int ans = 0;
        for(string s : s2){
            ans += s.size()+1;
        }
        return ans;
    }
};
