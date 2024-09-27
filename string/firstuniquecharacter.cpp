class Solution {
public:
    int firstUniqChar(string s) {
        int Hash[256]={0};

        for(int i=0;i<s.size();i++){
            Hash[s[i]]++;
        }

        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]=i;
        }

        for(int j=0;j<s.size();j++){
             if(Hash[s[j]]==1){
                return mpp[s[j]];
             }
        }

        return -1;
    }
};
