class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {

        int wordCnt=1; // initially at the first position 
        int n=searchWord.size();
        int left=0;
        int right=0;

        while(left<sentence.size()){
             
            if (sentence.substr(left, n) == searchWord) {
                return wordCnt;
            }

            // skip the current word
            while(left<sentence.size() && sentence[left]!=' '){
                left++;
            }

            if(sentence[left]==' '){
                left++;
            }

            wordCnt++;

            
        }
        return -1;
    }
};
