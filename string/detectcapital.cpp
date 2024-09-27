class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int capCount=0;
        int smallCount=0;

        for(int i=0;i<n;i++){
             if(word[i]>=65 && word[i]<=90){
                capCount++;
             }
             else{
                smallCount++;
             }
        }

        if(capCount==n || smallCount==n){
            return true;
        }

        if((smallCount==n-1) && (word[0]>=65 && word[0]<=90)){
            return true;
        }



        return false;
    }
};
