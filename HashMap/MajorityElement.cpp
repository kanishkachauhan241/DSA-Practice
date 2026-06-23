class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
            for(int num:nums){
                mp[num]++;
            }
            int n=nums.size();
            for(auto p:mp){
                if(p.second>n/2)
                return p.first;
            }
            return -1;
    }
};
