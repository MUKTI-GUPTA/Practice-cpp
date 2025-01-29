#include <bits/stdc++.h>
using namespace std;

void count0and1(int arr[],int size){
	int zerocount = 0;
	int  onecount = 0 ;
	for (int i = 0; i<size;i++){
		 if (arr[i]==0){
			zerocount ++;
		 }
		 if(arr[i]==1){
			onecount++;
		 }
	}
	// insertion
	fill(arr, arr+zerocount, 0);
	fill(arr+zerocount, arr+size, 1);

	// for (	int i =0;i<zerocount;i++){
	// 	arr[i]=0;
	// }
	// for(int i = zerocount;i<size;i++){
	// 	arr[i]=1;
	// }
}

int main() {
	 int arr[]={0,0,1,1,1,1,0,1};
	 int size;
	 cout<<"enter the size of array"<<endl;
	 cin >>size;
	 count0and1(arr,size);
	 for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	 }

	return 0;
}