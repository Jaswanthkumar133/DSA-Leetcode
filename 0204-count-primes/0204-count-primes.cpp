class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2
        
        vector<int> hash(n, 0); // 
        for (int i = 2; i * i < n; i++) {
            if (hash[i] == 0) { // If `i` is still prime
                for (int j = i * i; j < n; j += i) { // Mark all multiples of `i`
                    hash[j] = 1;
                }
            }
        }
        
        int count = 0;
        for (int i = 2; i < n; i++) { // Count primes
            if (hash[i] == 0) {
                count++;
            }
        }
        return count;
    }
};
