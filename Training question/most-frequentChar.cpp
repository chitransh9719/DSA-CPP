#include<iostream>
#include<string>
using namespace std;
int main (){
    string s ="aakssssshit";
    int n =s.size();

  
    int mx=INT_MIN;
    char ans;
    for(int i=0;i<n;i++){
          int count =0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j]) count++;
           
        }
        if(mx<count){  mx=count;
        ans= s[i];
        }
    }
    cout<<mx<<endl;
    cout<<ans;
    
}