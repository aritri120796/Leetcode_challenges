class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0,r=0;
        int lt=t.length(),ls=s.length();
        while(l<lt && r<ls){
            if(s[r]==t[l]){
                r++;l++;
            }
            else{
                l++;
            }
        }
        if(r<ls)return false;
        return true;
    }
};