class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding=0;
        int minEnding=0;
        int maxSum=0;
        int minSum=0;
        for(int num:nums){
            maxEnding=max(num,maxEnding+num);
            maxSum=max(maxSum,maxEnding);
            minEnding=min(num,minEnding+num);
            minSum=min(minSum,minEnding);
        }
        return max(maxSum,abs(minSum));
    }
};
