#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num;
cin>>num;
int arr[1000000000000000000];
int i=0;
while(num!=0){
    num=num/10;
    int arr[i]=(num%10);
    i++;
}
for(int j=0; j<i; j++){
    if(int arr[j]>4){
        arr[j]=9-arr[j];
    }
    else{
        arr[j]= arr[j];
    }
}
int array[1000000000000000000];
for(int j=0; j<=i; j++){
int pow(10,j);
int arr[];
int array[j]=arr[j]*pow(10,j);
}
int NUM=0;
for(int j=0; j<=i; j++){
    NUM=NUM+array[j];
}
cout<<NUM<<endl;


}