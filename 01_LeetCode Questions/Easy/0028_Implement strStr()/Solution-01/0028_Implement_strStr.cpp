class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        if(haystack.size()<needle.size()) return -1;
        int index = -1;
        
        for(int i=0;i<haystack.size()+1-needle.size();i++){
            if(haystack.substr(i,needle.size())==needle){
                return i;
            }
        }
        return index;
    }
};