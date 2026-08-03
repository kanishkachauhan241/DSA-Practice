class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        mp[0]=1;
        int prefixSum=0;
        int count=0;
        for(int num:nums){
            prefixSum+=num;
            int remainder=prefixSum%k;
            if(remainder<0)
                remainder+=k;
            if(mp.find(remainder)!=mp.end())
                count+=mp[remainder];
            mp[remainder]++;
        }
        return count;
    }
};
