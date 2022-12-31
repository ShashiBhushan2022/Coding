#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a,b;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
int c,d;
    if(a>=2){
        c=(a-2);
    }
    else{
        c=(2-a);
    }
    if(b>=2){
        d=(b-2);
    }
    else{
        d=(2-b);
    }
    cout<<c+d;






}