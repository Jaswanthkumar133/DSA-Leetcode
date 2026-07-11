class Solution {
public:
    long long modexp(long long base, long long exp, const long long &mod) {
        long long ans = 1;

        while (exp > 0) {
            if (exp & 1) {
                ans = (ans * base) % mod;
            }

            base = (base * base) % mod;
            exp >>= 1;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = (n + 1) / 2;

        const long long mod = 1000000007;

        return (modexp(5, even, mod) * modexp(4, odd, mod)) % mod;
    }
};