#include<iostream>
using namespace std;
void print(int n){
   
       
    cout<<n<<endl;
     if(n==1 ) return ;
    print(n-1);
    
   
    cout<<n;
 
}

int main(){
    // int n;
    // cin>>n;
    print(4);

}