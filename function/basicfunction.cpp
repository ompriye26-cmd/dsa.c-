// #include<iostream>
// using namespace std;
// int factorial(int a){
//     if(a==1||a==0){
//         return 1;

//     }
//     else
//     return a*factorial(a-1);
// }
// int main(){
//  int n=5;
//  cout<<factorial(n);
// }


// #include<iostream>
// using namespace std;
// void sir(){
//   cout<<"hii sir"<<endl;
// }
// void fun(){
//   cout<<"hello"<<endl;
//   sir();
// }
// int main(){
//    fun();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// void minimum(int a,int b){
//     if(a<b) cout<<a<<"is minimum";
//     else cout<<b<<"is minimum";
// }
// int main(){
//    minimum(94,86);
// }


// #include<iostream>
// using namespace std;
// int mini(int a,int b){
//     return min(a,b);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<mini(a,b);
// }


// #include<iostream>
// using namespace std;
// void pattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     cout<<"enter the no. of rows";
//     int a,b,c;
//     cin>>a>>b>>c;
//     pattern(a);
//     pattern(b);
//     pattern(c);
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int fun(int n,int m){
//    return n*m;
// }
// int main(){
//     int a=34,b= 24,c=65;
//     cout<<fun(5,9)<<endl;
//     cout<<pow(2,4)<<endl;
//     cout<<sqrt(225)<<endl;
//     cout<<cbrt(625)<<endl;
//     cout<<max(max(a,b),c);
// }


// #include<iostream>
// using namespace std;
// int x=45;
// void fun(){
//     x=20;
// }
// int main(){
//     int x=34;
//     cout<<x; cout<<endl;
//     cout<<::x<<endl;
//     //int x=10;
//     fun();
//     cout<<x; 
//}



// #include<iostream>
// using namespace std;
// int a=75;
// void change(){
//     a++;
// }
// void change(int a){
//     cout<<"welcome";
// }
// int main(){
//     change();
//    cout<<a;  
// }


// #include<iostream>
// using namespace std;
// void fun(char a){
//     cout<<"hello";
// }
// int main(){
//     fun(234);
// }


// #include<iostream>
// using namespace std;
// int main(){
    // int a,b;
    // cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    //method2
    //a=a+b-(b=a);
//     cout<<a<<" "<<b;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     float a,b;
//     cin>>a>>b;
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     cout<<a<<" "<<b;
// }


// #include<iostream>
// using namespace std;
// void fun(int& a){
//     a++;
// }
// int main(){
//   int a=9;
//   fun(a);
//   cout<<a;
// }