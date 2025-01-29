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

void last_occerence(int arr[],int n,int t, int &ansIndex){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (arr[mid]== t){
            ansIndex=mid;
            s=mid+1;
        }
        else if(arr[mid ]<t){
            s=mid +1;
        }
        else if(arr[mid]>t){
            e= mid-1;
        }
        mid =s+(e-s)/2;
    }
}

void total_occurence(int arr[],int n,int target,int &ansIndex){
    int first = -1;
    first_ocurrence(arr,n,target,first);
    int last = -1;
    last_occerence(arr,n,target,last);
    ansIndex = last - first +1;

}

int main (){

 int n =10;
 int array[n]={10,20,20,20,20,40,50,80,80,90};

 int target=20;
 int ansIndex =-1;
    total_occurence(array,n,target,ansIndex);

//  first_ocurrence(array,n,target,ansIndex);
 cout<< "total indexes "<< ansIndex<<endl;
    return 0;
}