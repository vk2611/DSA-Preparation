class Solution{
public:	
	int upper(int a[],int n, int t){
        int l=0;
        int h=n;
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
                if(mid+1==n+1){
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
    int lower(int a[],int n, int t){
        int l=0;
        int h=n;
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
	int count(int arr[], int n, int x) {
	    int l=lower(arr,n,x);
	    int u=upper(arr,n,x);
	    if(l!=-1 and u!=-1) return u-l+1;
	    else return 0;
	}
};
