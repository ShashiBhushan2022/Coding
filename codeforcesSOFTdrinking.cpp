#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int maxtoastAccToDrink=(k*l)/(n*nl);
    int maxtoastAccToSlice=(c*d)/(n);
    int maxtoastAccToSalt = (p)/(n*np);
    int val=maxtoastAccToDrink;
        val=min(val,maxtoastAccToSlice );
        val=min(val,maxtoastAccToSalt);
cout<<val<<endl;
}
