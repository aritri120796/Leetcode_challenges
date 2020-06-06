class Solution {
    vector<int>c;
    int sum=0;
public:
    Solution(vector<int>& w) {
        
        for(int i=0;i<w.size();i++){
            sum+=w[i];
            c.push_back(sum);
            }
    }
    
    int pickIndex() {
        int k=rand()%sum;
        return upper_bound(c.begin(),c.end(),k)-c.begin();
        
    }
};