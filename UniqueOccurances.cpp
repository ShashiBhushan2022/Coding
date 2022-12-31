#include<iosteream>
using namespace std;
int UniqueOccurance(int arr[],int size){
    for(int i=0; i<size; i++){
        if(arr[i]<=1000){
        for(int j=0; j<size; j++){
            int sum=0;
            if(arr[j]==arr[i]){
                sum++;
                arr[j]=1111;
            }
        }
    int array[1000];
        array[i]=sum;
    }
    else{
        i++;
    }
    
    }

}
int main(){


}