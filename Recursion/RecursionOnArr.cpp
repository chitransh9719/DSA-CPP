#include<iostream>
using namespace std;
void printRec( vector<int> &arr,int idx){
    if(idx==arr.size()) return ;
    cout<<arr[idx]<<" ";
    printRec(arr,idx+1);
}

int main(){
    vector<int> arr ={1,2,3,4,5,65,-45};
    printRec(arr,0);


}