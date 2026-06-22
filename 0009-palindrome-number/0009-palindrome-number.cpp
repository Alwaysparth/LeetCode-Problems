class Solution {
public:
    bool isPalindrome(int x) {
        int rem =0;
        double rev =0;
        int n = x;
        if (x < 0) return false;
        while ( n!=0){
            rem = n%10;
            rev = rev*10+rem;
            n=n/10;
        }
        if (rev == x){
            return true;
        }
        else return false;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna