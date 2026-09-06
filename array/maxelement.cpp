#include<iostream>
using namespace std;
int main(){
    int n,max=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        //arr[i+1]=arr[i];
        max=arr[i+1];
    }
   }
    cout<<max;
}


//find minimum