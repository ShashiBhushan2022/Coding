#include<iostream>
using namespace std;
int main(){
    int array[1000];
    int size;
    cout<<"Enter the size of the array."<<endl;
    cin>>size;
    cout<<"Enter the elements of the array."<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+array[i];
    }
    cout<<"Sum of the elements of array of size:"<<size<<" is:"<<sum<<endl;

}