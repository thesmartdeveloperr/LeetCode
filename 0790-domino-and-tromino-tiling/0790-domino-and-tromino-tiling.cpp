class Solution {
public:
	const int MOD = 1e9+7;
    int numTilings(int n) {
        if(n <= 2) return n;
        int filled_prev = 2, gap_prev = 2, filled_prev2 = 1, gap_prev2 = 1;
        for(int i = 3; i <= n; i++) {
            int filled = (filled_prev + filled_prev2 + 2l*gap_prev2) % MOD;
            int gap = (filled_prev + gap_prev) % MOD;
            
            filled_prev2 = filled_prev, filled_prev = filled;
            gap_prev2 = gap_prev, gap_prev = gap;
        }
        return filled_prev;
    }
};