// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     x=6;
//     y=4;
//     cout<<x;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the radius";
//     cin>>r;
//     float area=3.14*r*r;
//     cout<<"your area is:";
//     cout<<area;

// }


// #include<iostream>
// using namespace std;
// int main(){
// int a,b;
// cout<<"enter the number";
// cin>>a;
// b=a*a;
// cout<<"square of no. is";
// cout<<b;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,sum;
//     cout<<"enter the no1";
//     cin>>a;
//     cout<<"enter the no2";
//     cin>>b;
//     cout<<a+b;
// }


//  #include<iostream>
//  using namespace std;
//  int main(){
//     int p,r,t;
//     float si;
//     cout<<"enter principle rate and time respectively";
//     cin>>p>>r>>t;
//     si=(p*r*t)/100;
//     cout<<"yout simple intrest is:";
//     cout<<si;
//  }


/*

#include<iostream>
using namespace std;
int main(){
// int a=25;
// cout<<a%4;
// int x='A';
// cout<<(int)x; //💕65(explicit typecasting)
// int ascii=x; //implicit typecasting
int y=78;
cout<<(char)y;//give the alphabet whose ascii value is 78
}
/* */


//#include<istream>
//using namespace std;
// int main(){
//     char char1='A';
//     char char2='a';
  //  cout<<char1+char2;  //(not working in vs code)😊print the diff btween their ascii value and similarlly for addition multiplication and division
  //cout<<(char)('a'+1);
//}


// #include<iostream>
// using namespace std;
// int main(){
//      float a=26;
//     // int b =5;
//     // cout<<a/b;
//    // int a=2,b=5,c=6;
//    // cout<<a/b*c;
//     //cout<<"hello\nhello";
  
//     // cout<<a--<<endl;
//     //cout<<a; 

//     int b=a++ + --a;//😒thinkkk
//     //ans--firstly use(26) a then incrementd it by 1(27) then decrement and use(26)
// cout<<b;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   for(int i=1;i<6;i++){
//     for(int j=1;j<=2*i;j++){
//       cout<<"*";
//     }
//     cout<<"\n";
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even number";
//     }
//     else
//     cout<<"odd number";
// }


// #include<iostream>
// using namespace std;
// int factorial(int a){
//     if(a==1||a==0)
//     return 1;
//     else if(a==2)
//     return 2;
//     else
//     return a*factorial(a-1);


// }
// int main(){
//     int a;
//     cout<<"enter your number";
//     cin>>a;
//     int b=factorial(a);
//     cout<<b;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int l,b,area,peri;
//     cout<<"enter the length and breadth";
//     cin>>l>>b;
//     peri=2*(l+b);
//     area=l*b;
//     if(area>peri)
//     cout<<"area is greater";
//     else if(area==peri)
//     cout<<"equal";
//     else
//     cout<<"peri is greater";
// } 


//💕range of int is (2^31-1) to -(2^31) 


// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<"enter the number";
//   cin>>a;
//   if(a>=1000 && a<=9999){
//   cout<<"4 digit number";
//   }
//   else
//   cout<<"not 4 digit";
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<"enter the number";
//   cin>>a;
//   if(a%2==0 || a%3==0 || a%5==0){
//     cout<<"required no";
//   }
//   else
//   cout<<"not required";
  
// }


// #include<iostream>
// using namespace std;
// int main(){
//   char a;
//   cout<<"enter ur char";
//   cin>>a;
//    💕  // int x=(int)a;
//      //if(a>=65 && a<=90)
//   if(x>=65 && x<=90)
//   cout<<"uppercase letter";
//   else
//   cout<<"not uppercase";
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cin>>a;
//   if(a%5==0 && a%15!=0)
//   cout<<"5";
// else if(a%3==0 && a%15!=0)
//  cout<<"3";
//  else if(a%5==0  || a%3==0)
//  cout<<"5 and 3";
//  else if(a%5!=0 || a%3!=0)
//  cout<<"not 5 nor 3";

// }


// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;
//   if(a>=b){
//     if(a>=c)
//     cout<<a <<"is greater";
//    else
//     cout<<c <<"is greater";
//   }

//   if(b>=c){
//     if(b>=a)
//     cout<<b <<"is greater";
//     else
//     cout<<a <<"is greater";
//   }
//   else 
//   cout<<c <<"is greater";
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,c;
//   cout<<"enter the numbers";
//   cin>>a>>b>>c;
//   if(a<=b){
//     if(a<=c){
//       cout<<a <<"is least";
//     }
//     else
//     cout<<c<<"is least";
//   }

//   if(b<=a){
//     if(b<=c)
//     cout<<b<<"is least";
//     else
//     cout<<c<<"is ;east";
//   }
//   else 
//   cout<<c<<"is least";
// }




// #include<iostream>
// using namespace std;
// int main(){
//  int i=3;
//  for(i=1;i<=3;i++){
//     char ch='A';
//     for(int j=1;j<=i;j++){
//         cout<<ch++;
//     }
//     cout<<endl;
//  }
// }

// #include<iostream>
// using namespace std;
// int main(){
//  for(int i=1;i<=3;i++){
//    for(int j=1;j<=i;j++){
//     if((i+j)%2==0)
//     cout<<1;
//     else
//     cout<<0;
//    }
//     cout<<endl;
//  }
// }

//💕 #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     cout<<a++;
//     cout<<a++;
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             if(i==j)
//             cout<<"X";
//             else
//             cout<<a++;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//         if(i==0||i==3||j==0||j==3)
//         cout<<"#";
//         else
//         cout<<" ";
//     }
//     cout<<endl;
// }
// }

// 🤔#include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     for(int i=0;i<=n;i++){
//         for(int space=0;space<=(n-i);space++){
//             cout<<" ";
//             for(int j=1;j<=i;j++){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int x;
//   cout<<"enter the number";
//   cin>>x;
//   //(x%2==0) ? cout<<"even" : cout<<"odd";
//   cout<<((x%2==0) ? "even": "odd");
// }

//🤔
// #include<iostream>
// using namespace std;
// int main(){
//   int a, b,c;
//   cout<<"enter the numbers";
//   cin>>a>>b>>c;
//   (a>b) ? ((a>c)? cout<<a<<"is bigger" : cout<<c<<"is greaatest" )  : (b>c) ? ((b>a) ? cout<<b<<"is greater": cout<<c<<"is greater") :( cout<<c<<"is greater") ;
// }

// #include<iostream>
// using namespace std;
// int main(){

// }

// #include<iostream>
// using namespace std;
// int main(){
    
// }

// #include<iostream>
// using namespace std;
// int main(){
    
// }


