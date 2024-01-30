class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;

    double result = myPow(x, n / 2);
    result *= result;

    if (n % 2 != 0) {
        if (n > 0) {
            result *= x;
        } else {
            result /= x;
        }
    }

    return result;
    }
};