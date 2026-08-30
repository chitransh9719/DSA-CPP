#include<iostream>
using namespace std;
void akshit(){
    cout<<"akshit";
}
void chitransh(){
    cout<<"chitransh";
    akshit();

}
void panwar(){
    akshit();
    cout<<"panwar";
    chitransh();
}

int main(){
    akshit();
    chitransh();
    panwar();
    
}