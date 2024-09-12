#include<iostream>
using namespace std;


// count maximum occurance character in string 
char getmaxocccharacter(string s){

    int arr[26]={0};

    // create an array of count character 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // lower case
        int number=0;
        number=ch-'a';
        arr[number]++;
    }
    // find maximum occ character 
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}


// check palindrome string 
bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else 
        {
            s++;
            e--;

        }
    }
    return 1;
}

// reverse the string 

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;

    }
}
// couting lenth of character array
int getlenth(char name[]){

    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;

}

int main(){

    // making an char array

    // char name[20];
    // cout<<"enter your name :"<<endl;
    // cin>>name;
    // cout<<"your name is  "<<name<<endl;  /*printing name*/

    // // name[2]='\0';  /*it will skip character after 2 index 
    //                 //   because of null character is place at 2 index */
    // cout<<name<<endl;
    // int len=getlenth(name);
    // cout<<"lenth of string is "<<len<<endl;
    //  reverse(name,len); /*reverse the name*/
    // //  printing the reverse name 
    // cout<<name<<endl;
    // cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;
                                                                  
    string s;
    cin>>s;
    cout<<getmaxocccharacter(s)<<endl;
    

    return 0;
}