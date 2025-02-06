// nearly sorted array ia an array in whiach we can find the arr[i] in either a[i],a[i-1] or a[i+1] of the array .
# include<iostream>
using namespace std;

int applyBinarySearch(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (arr[mid]==target){
            return mid;
        }
        else if(arr[mid-1]==target){
            return mid-1;
        }
        else if (arr[mid+1]==target){
            return mid+1;
        }
        else if (arr[mid<target]){
            s=mid +2;
        }
        else{
            e=mid-2 ;
            }
             mid = s+(e-s)/2;
    }
    return -1;
}

int main (){

    int arr[] ={10, 3, 40, 20, 50, 80, 70};
    int size =7;
    int target = 500;

    int ans =applyBinarySearch(arr,size,target);
    cout<<"target found at index "<<ans<<endl;
    // if (ans==true){
    //     cout<< "target found " <<endl;
    // } 
    // else{
    //     cout<<"target not found"<<endl;
    // }
    return 0;
}