class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high=0,low=0,sum=0;
        int res=INT_MAX;
        while(high<nums.size()){
            sum=sum+nums[high];
            while (sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
       if (res==INT_MAX){return 0; }
       else{return res;}
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna