class Solution {
public:
    string multiply(string num1, string num2) {

        int len1=num1.size();
        int len2=num2.size();


        if(num1=="0" || num2=="0") return "0";

        vector<int>result(len1+len2,0);

        for(int i=len1-1;i>=0;i--){

            for(int j=len2-1;j>=0;j--){

                int multi=(num1[i]-'0')*(num2[j]-'0');

                int sum=multi+result[i+j+1];


                result[i+j+1]=sum%10;
                result[i+j]+=sum/10;
            }
        }

        string str="";
   
        for(int num:result){
            if(!(str.empty() && num==0)){
                 // this condition is for skiping the leading zeros  
                str+=to_string(num);
            }
        }
        return str;
    }
};
