class Solution {
public:
    bool isSameAfterReversals(int num) {
     
         int number=num;
        if(num>=0 && num<=9){
            return true;
        }

       long long int reverse1=0;

        while(num>0){

            reverse1=reverse1*10+(num%10);

            num=num/10;
        }

        long long int reverse2=0;

        while(reverse1>0){
            
            reverse2=reverse2*10+(reverse1%10);
            reverse1=reverse1/10;
        }

        if(reverse2==number){
            return true;
        }

        
        return false;
    }
};
