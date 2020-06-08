class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        return(n==pow(2,(int)log2(n)));
    }
};