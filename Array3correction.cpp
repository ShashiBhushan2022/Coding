#include<bits/stdc++.h>
using namespace std;
void maximum(int array[], int size){
    int maxi = INT_MIN;
    maxi=INT_MIN;
    for(int i=0; i<size; i++){
        if(array[i]>maxi){
            maxi=array[i];
        }
        else{
            maxi=maxi;
        }
    }
    return maxi;
};
 int minimum(int array[], int size){
    
    int mini=INT_MAX;
    
    for(int i=0; i<size; i++){
        if(array[i]<mini){
            mini=array[i];
        }
        else{
            mini=mini;
        }
    }
    return mini;
};

int main(){
    int array3[10];
    cout<<"Enter the size of the array."<<endl;
    int size;
    cin>>size;
    cout<<"enter the elements of the array."<<endl;
    for(int i=0; i<size; i++){
        cin>>array3[i];
    }
    minimum(array3,size){
        cout<<""
    }
    maximum(array3,size);
}