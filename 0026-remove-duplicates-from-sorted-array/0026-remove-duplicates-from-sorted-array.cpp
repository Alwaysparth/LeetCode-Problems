class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=0,next=1;

        while(next<nums.size()){
            if (nums[next]==nums[prev]){
                next++;
            }
            else{
                nums[prev+1]=nums[next];
                prev++;
            }
        }
        return prev+1;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna