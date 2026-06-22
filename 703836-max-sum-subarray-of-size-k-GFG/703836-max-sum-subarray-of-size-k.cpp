class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0,high=k-1,sum=0,res=0;
        int n=arr.size();
        for(int i=0;i<=high;i++){
            sum=sum+arr[i];
        }
        while(high<n){
            res=max(res,sum);
            high++;
            low++;
            if (high==n){
                break;
            }
            sum=sum-arr[low-1]+arr[high];
          
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna