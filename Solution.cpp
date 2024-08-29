class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";

        string ans=countAndSay(n-1);
        string newAns="";

        int i=0;

        while(i<ans.length()){
            int freq=1;
            while(i+1<ans.length() && ans[i]==ans[i+1]){
                freq++;
                i++;
            }
            newAns+= to_string(freq)+ans[i];
            i++;
        }

        return newAns;
    }
};
