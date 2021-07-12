class Solution {
public:
    vector<vector<int>>temp;
    
    void print(vector<int>a,int i,vector<int>t){
        if(i==a.size()){
            temp.push_back(t);
            return ;
        }
        t.push_back(a[i]);
        print(a,i+1,t);
        t.pop_back();
        print(a,i+1,t);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>t;
        print(nums,0,t);
        return temp;
    }
};
