class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        
        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }

        if(mpp.size()==1){
            auto it=mpp.begin();

            return it->second;
        }

        for(auto& it:mpp){
            if((it.second)%2!=0 && it.second!=1){
                it.second--;
            }
        }

        // count odd count characters
        int oddCount=0;
        for(auto it:mpp){
            if(it.second==1){
                oddCount++;
                break;
            }
        }
        
        int evenCount=0;
        for(auto it:mpp){
            if((it.second)%2==0){
                evenCount+=it.second;
            }
        }
        
      return evenCount+oddCount;

        
    }
};
