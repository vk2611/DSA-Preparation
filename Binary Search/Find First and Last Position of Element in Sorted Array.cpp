class Solution {
public:
    int upper(vector<int>& a, int t){
        int l=0;
        int h=a.size()-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]>t){
                h=mid-1;
            }
            else if(a[mid]<t){
                l=mid+1;
            }
            else {
                if(mid+1==a.size()){
                    return mid;
                }
                else if(a[mid+1]!=t){
                    return mid;
                }
                else{
                    l=mid+1;
                }
            }
        }
        return -1;
    }
    int lower(vector<int>& a, int t){
        int l=0;
        int h=a.size()-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]>t){
                h=mid-1;
            }
            else if(a[mid]<t){
                l=mid+1;
            }
            else {
                if(mid==0){
                    return mid;
                }
                else if(a[mid-1]!=t){
                    return mid;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int>ans;
        if(nums.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return  ans;
        }
        int l=lower(nums,t);
        int u=upper(nums,t);
        ans.push_back(l);
        ans.push_back(u);
        
        return ans;
    }
};
