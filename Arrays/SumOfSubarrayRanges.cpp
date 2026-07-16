class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long s=0;
        for(int i=0;i<nums.size();i++){
            int min_i=nums[i];
            int max_i=nums[i];
            for(int j=i;j<nums.size();j++){
                min_i=min(min_i,nums[j]);
                max_i=max(max_i,nums[j]);
                s+=max_i-min_i;
            }
        }
        return s;
    }
};
