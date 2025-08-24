class Solution {
public:
    int reverseBits(int n) {
        int out{0};
        
        for(int i = 0; i < sizeof(int) * 8; i++){
            int bit = (n >> i) & 1;
            out = out | (bit << ((sizeof(int) * 8) -1) - i);
        }
        return out;
    }
};