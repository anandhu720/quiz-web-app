class Solution {
public:
    int trailingZeroes(int n) {
       int res = 0;
        for(int i=5;i<=n;i=i*5)
            res += n/i;
        return res;
    }
};