class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        int s = m+n-1;

        while(b>=0){
            if(a>=0){
                if(nums1[a]<=nums2[b]){
                    nums1[s]=nums2[b];
                    b--;
                    s--;
                }
                else {
                    nums1[s] = nums1[a];
                    a--;
                    s--;
                }
            }
            else{
                nums1[s]=nums2[b];
                b--;
                s--;
            }
            
        }
    }
};