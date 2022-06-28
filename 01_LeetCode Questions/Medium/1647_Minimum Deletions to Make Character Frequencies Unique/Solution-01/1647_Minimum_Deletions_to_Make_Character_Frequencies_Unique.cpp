class Solution {
public:
    int minDeletions(string s) {
        vector<int> frequency(26,0);
        for(char ch : s)
            frequency[ch-'a'] ++;
        
        sort(frequency.begin(),frequency.end(),greater<int>());
        
        int min_deletions = 0;
        set<int> freq;
        
        for(int f : frequency){
            int val = f;
            if(0==val) break;
            
            while(freq.end()!=freq.find(val)){
                val --;
            }
            min_deletions += (f-val);
            if(0!=val)
                freq.insert(val);
        }
        return min_deletions;
    }
};