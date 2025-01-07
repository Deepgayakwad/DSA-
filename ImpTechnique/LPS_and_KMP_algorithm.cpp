class Solution {
public: 
    
    int findIdxOfFirstOcc(string text, string pattern){
           
           // step 1 find out the lps of pattern
           int m=text.size();
           int n=pattern.size();
           vector<int>LPS(n,0);

           LPS[0]=0;

           int len=0;

           for(int i=1;i<n;i++){
                
                if(pattern[i]==pattern[len]){
                      len++;
                      LPS[i]=len;
                }
                else{
                      
                      if(len!=0){
                          len=LPS[len-1];
                         i--;   // IMP step 
                      }
                      else{
                        LPS[i]=0;
                      }
                }
           }

           


           // step 2 to apply the KMP algo
           int i=0; // put on pattern string 
           int j=0; // put on text string 

          

           while(i<text.size()){
                 
                 


                 if(text[i] == pattern[j]){
                      i++;
                      j++;
                 }

                  if(j==n){
                      return i-j;
                 }
                 else if(i<text.size()  && text[i]!=pattern[j]){
                        
                            if(j!=0){
                                 j=LPS[j-1];
                            }
                            else{
                                i++;
                            }
                 }
           }
 
           return -1;
    }
    int strStr(string haystack, string needle) {

          
        int ans=findIdxOfFirstOcc(haystack,needle);
        return ans;
        
    }
};
