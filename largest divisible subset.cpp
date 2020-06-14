class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return arr;
        vector<int>l(n,1);
        sort(arr.begin(),arr.end());
        vector<int>x;
        int m=0,pos=0;
        
        for(int i=1;i<n;i++){
            
            for(int j=0;j<i;j++){
               
                if(arr[i]%arr[j]==0 && l[j]+1>l[i]){
                        l[i]=l[j]+1;
                }
                
            }
            if(m<l[i]){
                m=l[i];
                pos=i;
                }
            cout<<l[i]<<endl;
        }
        x.push_back(arr[pos]);
        for(int i=pos-1;i>=0;i-- ){
            
            if(arr[pos]%arr[i]==0 && l[i]==m-1){
               
                m=l[i];pos=i;
                x.push_back(arr[i]);
            }
        }
        reverse(x.begin(),x.end());
        return x;
        
    }
};