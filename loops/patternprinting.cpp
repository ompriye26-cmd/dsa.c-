// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             cout<< j ;
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// cout<<"enter no. of rows and clmns";
// int m,n;
// cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=65;j<=n+65;j++){
//             cout<<(char)j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             if(i%2==0)
//             cout<<(char)(64+i);
//             else
//             cout<<(char)(96+i);
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 🪼hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i==5||i==1||j==1||j==5)
//             cout<<"* ";
//             else
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a++<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     for(int i=1;i<=4;i++){
//         a=1;
//         for(int j=1;j<=i;j++){
//             if(i%2==0){
//             a=!a;
//             cout<<a;
            
//             }
            
//             else{
//                 cout<<a;
//                 a=!a;
//             }
//         }
//         cout<<endl;
//     }
   
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>=1;i--){
//      for(int j=1;j<=4;j++){
//          if(j>=i){
//              cout<<"*";
//          }
//          else
//          cout<<" ";
//          }
//          cout<<endl;
        
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=4;i>=1;i--){
//         int a=1;
//         for(int j=1;j<=4;j++){
//              if(j>=i){
//                 cout<<a++;
//              }
//              else
//              cout<<" ";
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=65;
//     for(int i=69;i>=65;i--){
//         for(int j=65;j<=69;j++){
//             if(j>=i)
//             cout<<(char)a;
//             else
//             cout<<" ";
//         }
//         a++;
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1; j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no. of rows";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// method-1 downward pyramid
//😒😲 #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no. of rows";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     //cout<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter the no. of rows";
//      cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-3;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// method-2 downward pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the no. of rows";
//     cin>>n;
//     int s=0,st=2*n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=s;j++){
//         cout<<" ";
//         }
//         for(int j=1;j<=st;j++){
//             cout<<"*";
//         }
//         s+=1;
//         st-=2;
//      cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i;j--){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<" ";
//         }
//         for(int j=5;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=4;j>i;j--){
//             cout<<" ";
//         }
//         cout<<"*";
//         for(int j=1;j<2*i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i<j)
            cout<<i<<" ";
            else
            cout<<j<<" ";
        }
        for(int i=3;i>=1;i--){
            for(int k=1;k<=4;k++){
                if(i<k)
                cout<<i<<" ";
                else cout<<k<<" ";
            }
        }
        cout<<"\n";
    }
}