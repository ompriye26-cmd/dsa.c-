#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else
    return n*fact(n-1);
}
int main(){
    int m;
    //cout<<"enter n and r";
    cout<<"enter the no. of rows";
    cin>>m;
  // int ncr=fact(n)/(fact(r)*fact(n-r));
   for(int i=0;i<=m;i++){
    for(int j=m;j>=i;j--){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        int ncr=fact(i)/(fact(j)*fact(i-j));
        cout<<ncr<<" ";
    }
    cout<<endl;
   }
}