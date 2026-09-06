#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& A){
    A[2]=99;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    change(arr);
    cout<<arr[2];
}