#include<iostream>
#include<string>
using namespace std;
int main (){
    string s ="sky is blue";
    int n= s.size();
    int i=0,j=0;
    while( j<=n){
        if( j<n &&s[j]!=' ') j++;
        else{
            int left =i;
            int right =j-1;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            i=j+1;
            j++;
        
        
        }
       
    }
    cout<<s;
}