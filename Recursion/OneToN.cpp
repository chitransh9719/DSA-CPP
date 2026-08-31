#include<iostream>
 using namespace std;
 void print(int n){
    if(n==0) return ;
    print (n-1);
    cout<<n;
 }
 int main(){
    int n;
    cin>>n;
    print(n);
 }


// #include<iostream>
// using namespace std;
// int n;
// void print(int x){
//     if(x>n) return;
//     cout<<x;
//     print(x+1);
// }
// int main (){
//     cin>>n;
//     print(1);
// }
