class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int n=arr.size();
        if(n==1)return;
        if(n==2){
            sort(arr.begin(),arr.end());return;
        }
        int low=0,mid=0,high=n-1;
        int i=mid;
        while(mid<=high){
            
            switch(arr[mid]){
            
            case 0:
            
            arr[mid]=arr[low];
            arr[low]=0;
            mid++;low++;
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            arr[mid]=arr[high];
            arr[high--]=2;
            
            break;
            }
            
        }
    }
};