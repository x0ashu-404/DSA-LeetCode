class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest = nums[0];
        int second_largest = INT_MIN;
        int third_largest = INT_MIN;
        int smallest = nums[0];
        int second_smallest = INT_MAX;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>=largest){
                third_largest = second_largest;
                second_largest = largest;
                largest = nums[i];

            }

            else if(nums[i]<largest and nums[i]>=second_largest){
                third_largest = second_largest;
                second_largest = nums[i];
            }

            else if(nums[i]<second_largest and nums[i]>=third_largest){
                third_largest = nums[i];
            }

            if(nums[i]<=smallest){
                second_smallest = smallest;
                smallest = nums[i];
            }

            else if(nums[i] <= second_smallest and nums[i] >= smallest){
                second_smallest = nums[i];
            }
        }

        long long op1 = 1ll * largest * second_largest * third_largest;
        long long op2 = 1ll * smallest * second_smallest * largest;
        int ans = max(op1, op2);

        return ans;
    }
};