#include<iostream>
using namespace std;

void first_ocurrence(int arr[], int n,int target,int &ansIndex){

int start = 0;
int end = n-1;
int mid = start+(end-start)/2;
while(start<=end){
    if(arr[mid]==target){
        ansIndex = mid;
        end = mid-1;
    }
    if(arr[mid]<target){
        start = mid+1;
    }
    else if (arr[mid]>target){
        end = mid - 1;
    }
    mid =start+(end -start)/2;
}
}



int main (){

 int n =10;
 int array[n]={10,20,20,20,30,40,50,80,80,90};

 int target=20;
 int ansIndex =-1;
 first_ocurrence(array,n,target,ansIndex);
 cout<< "element found at index: "<< ansIndex<<endl;
    return 0;
}
