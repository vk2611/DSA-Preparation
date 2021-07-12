class Solution {
public:
   
    string generate(int i){
        string s="";
        while(i>0){
            s+=i%2+'0';
            i/=2;
        }
        return s;
    }
    
    vector<vector<int>> subsets(vector<int>& a) {
        int n=a.size();
        int k=pow(2,n)-1;
        vector<vector<int>>ans;
        for(int i=0;i<=k;i++){
            vector<int>arr;
            string str=generate(i);
            for(int j=0;j<str.size();j++){
                if(str[j]!='0'){
                    arr.push_back(a[j]);
                }
            }
            ans.push_back(arr);
        }
        return ans;
    }
};
