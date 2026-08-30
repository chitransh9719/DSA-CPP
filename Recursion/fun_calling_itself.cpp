#include<iostream>
using namespace std;
void chitransh(int n){
    if(n==0) return ;
    cout<<"chitransh"<<endl;
    chitransh(n-1);
}
int main(){
    chitransh(3);
}
// cd ~/Desktop/DSA-CPP