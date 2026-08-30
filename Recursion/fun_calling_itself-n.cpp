#include<iostream>
using namespace std;
void chitransh(int n){
    if(n==0) return ;
    cout<<n;
    
      chitransh(n-1);
    }

int main(){
    int n;
    cout<<"enter no. ";
    cin>>n;
    chitransh(n);
}