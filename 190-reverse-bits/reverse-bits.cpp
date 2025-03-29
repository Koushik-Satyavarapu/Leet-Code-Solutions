class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;  // Initialize result
        for (int i = 0; i < 32; i++) {
            rev <<= 1;       // Shift left to make space for the next bit
            rev |= (n & 1);  // Extract the last bit of n and add it to rev
            n >>= 1;         // Right shift n to process the next bit
        }
        return rev;
    }
};
