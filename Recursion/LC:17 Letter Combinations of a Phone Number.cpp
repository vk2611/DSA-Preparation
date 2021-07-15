class Solution {
public:
    vector<string>ans;
    void solve(string temp,string str,int i,vector<vector<int>>mp){
        if(str[i]=='\0'){
            ans.push_back(temp);
            return;
        }		
        for(int j=0;j<mp[str[i]-'0'-2].size();j++){
            solve(temp+(char)mp[str[i]-'0'-2][j],str,i+1,mp);
        }
    }
    vector<string> letterCombinations(string str) {
        if(str.size()==0) return ans;
        vector<vector<int>>mp;
        mp.push_back({'a','b','c'});
        mp.push_back({'d','e','f'});
        mp.push_back({'g','h','i'});
        mp.push_back({'j','k','l'});
        mp.push_back({'m','n','o'});
        mp.push_back({'p','q','r','s'});
        mp.push_back({'t','u','v'});
        mp.push_back({'w','x','y','z'});
        solve("",str,0,mp);
        return ans;
    }
};
