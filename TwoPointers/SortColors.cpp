class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }
            if(nums[i]==1){
                c1++;
            }
            if(nums[i]==2){
                c2++;
            }
        }
        int i=0;
        while(c0!=0){
            nums[i]=0;
            i++;
            c0--;
        }
        while(c1!=0){
            nums[i]=1;
            i++;
            c1--;
        }
        while(c2>0){
            nums[i]=2;
            i++;
            c2--;
        }

    }
};
