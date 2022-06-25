class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int prev = 0;
        bool canWeChange = true;
        for(int i=1;nums.size()>i;i++){
            if(nums[i]<nums[prev]){
                if(canWeChange ){
                    if(1==i){
                        prev = i;
                    }else if(0!=prev && nums[prev-1]<=nums[i]){
                        prev = i;
                    }
                    canWeChange = false;
                }else{
                    return false;
                }
            }else{
                prev = i;
            }
        }
        return true;
    }
};