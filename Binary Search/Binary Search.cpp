class Solution {
public:
    int binary(vector<int>a,int target){
        
        int l=0;
        int r=a.size()-1;
        int mid;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==target){
                return mid;
            }
            else if(a[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int ans=binary(nums,target);
        if(ans==-1){
            return -1;
        } return ans;
    }
};
