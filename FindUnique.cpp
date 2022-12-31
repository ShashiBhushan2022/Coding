#include<bits/stdc++.h>
using namespace std;
int FindPrintUnique(int array[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^array[i]; 

      /*  array[i];
        for(int j=0; j<=size; j++){
            if(array[i]==array[j]){
                bool=1;
            }
        }
        if(bool!=1){
            cout<<array[i];

        }*/
    }
    cout<<ans<<endl;
}
int main(){
int arr[7]={2,3,4,4,3,2,7};
FindPrintUnique(arr,7);
}