#include <bits/stdc++.h>
using namespace std;
// all pairs of array
void countAllPairs(int arr[],int size){
	 for (int i =0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<"("<<arr[i]<<","<<arr[j]<<")";
		}
		cout<<endl;
	 }
     cout<<endl;
}

// with daignols
void count_all_Pairs_with_diagonals(int arr[],int size){
	 for (int i =0;i<size;i++){
		for(int j=i;j<size;j++){
			cout<<"("<<arr[i]<<","<<arr[j]<<")";
		}
		cout<<endl;
	 }
}
// without diagnols
void count_all_Pairs_without_diagonals(int arr[],int size){
	 for (int i =0;i<size;i++){
		for(int j=0;j<i;j++){
			cout<<"("<<arr[i]<<","<<arr[j]<<")";
		}
		cout<<endl;
	 }
}



int main() {
	 int arr[]={10,20,30,40,50,60,70,80};
	 int size;
	 cout<<"enter the size of array"<<endl;
	 cin >>size;
    countAllPairs(arr,size);
	count_all_Pairs_with_diagonals(arr,size);
    count_all_Pairs_without_diagonals(arr,size);
	//  for (int i=0;i<size;i++){
	// 	cout<<arr[i]<<" ";
	//  }

	return 0;
}