#include<iostream>
 using namespace std;
 int power(int n, int b){
    if(n==0) return 1;
    int ans = n* power(n,b-1);
    return ans;
 }
 int main (){
    int n,b;
    cin>>n>>b;
    cout<<power(n,b);
 }
