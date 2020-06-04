class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        if(n==0)return;
        int l=0,r=n-1;
        char t;
        while(l<=r){
            t=s[l];
            s[l]=s[r];
            s[r]=t;
            l++;r--;
        }
    }
};