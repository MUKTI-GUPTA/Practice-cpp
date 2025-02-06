#include<bits/stdc++.h>
using namespace std;

int findoddOccuringElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(s==e){
            // we found the element
            return s;
        }
        // check mid
        if(mid-1>=0 && arr[mid]!=arr[mid-1] && mid+1<size && arr[mid]!=arr[mid+1]){
            return mid; 
        }
        if(mid-1>=0 && arr[mid]==arr[mid-1]){
            int startingindex = mid-1;
            if(startingindex & 1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
       else if(mid+1<size && arr[mid]==arr[mid+1]){
             int startingindex = mid;
            if(startingindex & 1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            }

        mid = s+(e-s)/2;
    }
    return -1;
}

int main (){
    int arr[]={1,1,2,2,3,3,4,4,5,6,6,3,3};
    int size = 13;

    int ans= findoddOccuringElement(arr,size);
    cout<<"odd occuring element is "<<ans<<endl;
    cout<<"element is "<<arr[ans]<<endl;
    return 0;
}