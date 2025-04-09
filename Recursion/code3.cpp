#include <iostream>
using namespace std;

bool checkSorted(int arr[],int size ,int index){
// base case 
if (index ==size-1){
    return true;
}
int cuur_ans = false;
int recursion_ka_ans =false;
if(arr[index+1]>arr[index]){
    cuur_ans = true;
}

recursion_ka_ans= checkSorted(arr,size,index+1);

if(cuur_ans && recursion_ka_ans){
    return true;
}
else{
    return false;
}
}


int main (){
    int arr[]={10,20,30,40,50};
    int size =4;

    int index =0;
    int ans =checkSorted(arr,size,index);
    cout<<"Array is Sorted: "<< ans << endl;
    return 0;
}
