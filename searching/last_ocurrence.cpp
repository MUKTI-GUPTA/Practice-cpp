#include <bits/stdc++.h>
using namespace std;

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


int main() {
    int n =10;
	int array[n]={10,20,30,40,40,50,60,60,70,80};
    int t =90;
    int ansIndex = -1;
    last_occerence(array, n , t, ansIndex);
    cout << "Element found at index: " << ansIndex << endl;
	return 0;
}
