// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][4];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
        
//     }for(int i=0;i<2;i++){
//             for(int j=0;j<4;j++){
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//     }


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int sum=0,maxsum=INT_MIN,a=-1;
    int arr[][4]={{1,2,3,4},{2,5,2,5},{9,8,5,1}};
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum;
        if(sum>maxsum){
         maxsum=sum;
         a++;
         sum=0;
        }
        cout<<endl;
     }
     cout<<a;
}
