#include<iostream>
using namespace std;


bool isVowel(char c){

    c=tolower(c);

    return (c=='a'  || c=='e' || c=='i' || c=='o' || c=='u');

}
int main(){

    char ch;
    cout<<"enter the character "<<endl;

    cin>>ch;

    if(isVowel(ch)){
        cout<<"character is vowel "<<endl;
    }
    else{
        cout<<"character is not vowel"<<endl;
    }


    return 0;
}