#include<iostream>
using namespace std;

void printarray(int arr[], int size){
for(int i=0; i<size; i++){
cout<< "value at" <<i<<"th index"<< arr[i]<<endl;
}

};
int main(){
 //declration
int arr[10];
int number[10] = {0}; //all index will have 0 value.
// check for all index value=1 or any other value for entir array.
int firstarray[100]={4,9,8,3,7,5,9,8,3,7};
printarray(firstarray,100);
printarray(number,10);
}