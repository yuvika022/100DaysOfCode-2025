
public class IntegerSquareRoot {

    public static void main(String[] args) {
        int n = 26;
        System.out.println("Integer square root of " + n + " is: " + integerSqrt(n));
    }

    // Function to compute integer square root using binary search
    public static int integerSqrt(int n) {
        if (n == 0 || n == 1) {
            return n;
        }

        int left = 1, right = n;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // To avoid overflow, use long for multiplication
            long square = (long) mid * mid;

            if (square == n) {
                return mid; // Perfect square
            } else if (square < n) {
                ans = mid;       // Mid is a potential answer
                left = mid + 1;  // Try to find a bigger one
            } else {
                right = mid - 1; // Square too big
            }
        }

        return ans;
    }

}
