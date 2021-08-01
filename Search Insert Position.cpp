class Solution {
public:
    int binary(vector<int>a,int t){
        int l=0;
        int r=a.size()-1;
        int mid;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==t) return mid;
            else if(a[mid]>t){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
     return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary(nums,target);
    }
};
