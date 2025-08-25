class Solution {
public:
    int hammingWeight(int n) {
        int count{0};

        for(count; n; count++){
            n &= n - 1;
        }
        
        return count;
    }
};