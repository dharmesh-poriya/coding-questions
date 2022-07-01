class Solution {
private:
    static bool myCmp(vector<int> &a,vector<int> &b){
        if(a[1]==b[1]) return a[0]>b[1];
        return a[1]>b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),myCmp);
        int ans = 0;
        for(auto v : boxTypes){
            int numberOfBoxes = v[0];
            int numberOfUnitsPerBoxi = v[1];
            if(numberOfBoxes<=truckSize){
                ans += (numberOfBoxes*numberOfUnitsPerBoxi);
                truckSize -= numberOfBoxes;
            }else{
                ans += (truckSize*numberOfUnitsPerBoxi);
                break;
            }
        }
        return ans;
    }
};