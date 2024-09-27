class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>mpp;
       unordered_map<char,int>mpp2;

       for(int i=0;i<s.size();i++){
           mpp[s[i]]++;
       }

       for(int j=0;j<t.size();j++){
           mpp2[t[j]]++;
       }

       if(s.size()>=t.size()){
           for(int k=0;k<s.size();k++){
              char ch=s[k];

           if(mpp[ch]!=mpp2[ch]){
              return false;
           }
       }
       }
       else{
          for(int k=0;k<t.size();k++){
             char ch=t[k];

           if(mpp[ch]!=mpp2[ch]){
              return false;
           }
       }
       }

       

       return true;
    }
};
