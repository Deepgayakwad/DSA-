class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) { 

        int left=0;
        int n=s.size();
        int right=0;
        string ans="";

       while(left<s.size()){


           if(right>=spaces.size() || left!=spaces[right]){
              ans+=s[left];
              left++;
           }
           else if(left==spaces[right]){
              ans+=" ";
              right++;
           }
       }

       return ans;
        
    }
};