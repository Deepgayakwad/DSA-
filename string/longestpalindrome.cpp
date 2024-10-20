class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        
        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        // if characters in map are same 
        if(mpp.size()==1){
           return s.size();
        }

        int length=0;
        bool hasOdd=false;

        // & is used to change the actual value in map
        for(auto& it:mpp){
            if((it.second)%2==0){
                length+=it.second;
            }
            else{
                length+=it.second-1;
                hasOdd=true;
            }
        }

       if(hasOdd){
              length+=1;
       }
        
      return length ;

        
    }
};
