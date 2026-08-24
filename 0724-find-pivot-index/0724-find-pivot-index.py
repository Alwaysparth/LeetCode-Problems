class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        n=len(nums)
        left=0
        sum=0
        for i in range(n):
            sum=sum+nums[i]
        for i in range(n):
            right=sum-left-nums[i]
            if (left==right):
                return i
            left=left+nums[i]
        return -1

      
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna