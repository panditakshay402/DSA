class Solution {
public:
    long long largestInteger(int n, int s) {
        // Impossible if digit sum is greater than maximum possible sum
        if (s > 9 * n)
            return -1;

        if (s == 0)
            return 0;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int digit = min(9, s);

            ans = ans * 10 + digit;
            s -= digit;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna