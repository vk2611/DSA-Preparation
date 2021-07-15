class Solution {
public:
    vector<vector<int>>ans;
    void solve(int s,int i,vector<int>a,vector<int>temp){
        if(s<=0 or i>=a.size()){
            if(s==0) 
                ans.push_back(temp);
            return ;
        }
        temp.push_back(a[i]);
        solve(s-a[i],i,a,temp);
        temp.pop_back();
        solve(s,i+1,a,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<int>temp;
        solve(target,0,a,temp);
        return ans;
    }
};
