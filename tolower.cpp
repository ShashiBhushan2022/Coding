#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>="a"&&ch<="z"){
        return ch;
    }
    else{
        char temp = ch - "A" + "a";
        //for uppercase --> temp = ch - 'a' + 'A';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolowercase(a[s]) != tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
}
int getlength(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){


}