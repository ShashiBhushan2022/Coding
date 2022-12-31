//swap alternate elements.
//eg.-->{2,4,5,7,6,8,9,1}-->{4,2,7,5,8,6,1,9}
#include<bits/stdc++.h>
using namespace std;
void altswapPrint(int array[], int size){
for(int i=0; i<(size-1); i+=2){
swap(array[i],array[i+1]);
}
for(int i=0; i<size; i++){
cout<<array[i]<<" ";
}
cout<<endl;
};
int main(){
int arr[10]={2,3,4,5,6,7,8,9,0,1};
int ARR[6]={2,3,4,5,6,78};
altswapPrint(ARR,6);
altswapPrint(arr,10);
}
/*swapping: temp=arr[1];
arr[1]=arr[0];
arr[0]=temp; */
