// #include<iostream>
// using namespace std;
// void printRec( vector<int> &arr,int idx){
//     if(idx==-1) return ;
//     cout<<arr[idx]<<" ";                 METHOD 1 ;
//     printRec(arr,idx-1);
// }

// int main(){
//     vector<int> arr ={1,2,3,4,5,65,-45};
//     printRec(arr,arr.size()-1);


// }
#include<iostream>
using namespace std;
void printRec( vector<int> &arr,int idx){
    if(idx==arr.size()) return ;
    printRec(arr,idx+1);
    cout<<arr[idx]<<" ";
    
}

int main(){
    vector<int> arr ={1,2,3,4,5,65,-45};
    printRec(arr,0);


}