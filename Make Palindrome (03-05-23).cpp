class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int>m,p;
        for(auto i:arr){
            m[i]++;
        reverse(i.begin(),i.end());
        p[i]++;
        }
        return m==p;
    }
};
