class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(n+m);
        int i=0;
        int j=0;
        int id=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                res[id]=nums1[i];
                i++;
                id++;
            }
            else{
                res[id]=nums2[j];
                j++;
                id++;
            }
        }
        while(j<n){
            res[id]=nums2[j];
            j++;
            id++;
        }
        while(i<m){
            res[id]=nums1[i];
            i++;
            id++;
        }
        nums1=res;
        
    }
};
