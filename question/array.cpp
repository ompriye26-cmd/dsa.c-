//reverse array

// #include<iostream>
// #include<iterator>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,4,5};
//    int i=0,j=(sizeof(arr)/sizeof(int))-1;
//    int temp;
//   // cout<<i<<j;
//    while(i<j){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
//    }
//    int a=0,b=(sizeof(arr)/sizeof(int))-1;
//    while(a<=b){
//     cout<<arr[a]<<" ";
//     a++;
//    }
// }     


//Rotate array  Lc--189

// #include<iostream>
// using namespace std;
// void reverse(int arr[],int i,int j){
//      while(i<j){
//       int temp=arr[i];
//        arr[i]=arr[j];
//        arr[j]=temp;
//        i++;
//        j--;
//      }

// }
// int main(){
//    int m;
//    cout<<"enter size of array";
//    cin>>m;
//    int arr[m];

//    cout<<"entet the elements of array"<<endl;
//    for(int i=0;i<m;i++){
//       cin>>arr[i];
//    }

//    int k;
//    cout<<"enter the no. to rotate array from right";
//    cin>>k;
//    k=k%m; //if k is more than m then (there would be error in 56th line)
   
//    reverse(arr,0,m-1);
//    reverse(arr,0,k-1);
//    reverse(arr,k,m-1);
   
//    for(int i=0;i<m;i++){
//       cout<<arr[i]<<" ";
//    }

// }

 
//segregate 0s and 1s
//(method1)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of ur array";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"enter the elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int zeros=0;
//     int ones=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zeros++;
//         }
//         else ones++;
//     }   
//     for(int i=0;i<n;i++){
//         if(i<zeros){
//             arr[i]=0;
//         }
//         else
//         arr[i]=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
       
// }
    
//(method 2)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"enter the elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int i=0;
//     int j=n-1;
//     int temp;
//     for(int i=0;i<j;){
//         if(arr[i]==0) i++;
//         else if(arr[j]==1) j++;
//         else if(arr[i]==1&&arr[j]==0){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             i++;
//             j--;
//         }
       
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//two sum

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the array size";
//     cin>>n;
//     int arr[n];
//     int target;
//     cout<<"enter elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter target";
//     cin>>target;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             int sum=arr[i]+arr[j];
//             if(sum==target){
//                 cout<<"indices are"<<i<<j;
//                 return 0;
//             }
//         }
//     }
//     cout<<"target is not present";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={0,1,4,3,2,5,9,7,8};
//     for(int j=0;j<8;j++){
//     for(int i=0;i<8;i++){
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }}
//   int comp=0;
//     for(int i=0;i<9;i++){
//         if(arr[i]==comp){
//             comp++;
//         }
//         else{
//         cout<<comp;
//         return 0;
//         }
//     }
// }

// wave array
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int l,int u){
//    int temp=arr[l];
//    arr[l]=arr[u];
//    arr[u]=temp;
// }
// int main(){
//     int arr[8];
//      for(int i=0;i<8;i++){
//         cin>>arr[i];
//      }
//      int l=0,u=1;
//      for(int i=0;i<4;i++){
//         reverse(arr,l,u);
//         l+=2;
//         u+=2;
//      }
//      for(int i=0;i<8;i++){
//         cout<<arr[i];
//      }
     
// }


//plush one Lc--66





// merge two sorted arrays

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"enter no.elements of 1st sorted array";
//     cin>>n;
//     cout<<"enter no.elements of 2st sorted array";
//     cin>>m;
//     vector<int> arr1(n);
//     vector<int> arr2(m);
//     vector<int> arr;
    
//     cout<<"enter elements of 1st sorted array";
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//      cout<<"enter elements of 2st sorted array";
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }

//     int i=0,j=0;
//     while(i<n&&j<m){
//         if(arr1[i]<arr2[j]){
//             arr.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             arr.push_back(arr2[j]);
//             j++;
//         }

//     }
//     while(i<n){
//         arr.push_back(arr1[i]);
//         i++;
//     }
              
//     while(j<m){
//         arr.push_back(arr2[j]);
//         j++;
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

// }

