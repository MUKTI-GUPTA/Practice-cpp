#include <bits/stdc++.h>
using namespace std;
 void shiftaArray(int arr[],int size,int s){
 s= s%size;
 if (s==0){
	return;
 }
 int temp[100];
 int index=0;
 for(int i =size-s;i<size;i++){
	temp[index]=arr[i];
	index++;
 }
 for (int i =size-1;i>=0;i--){
	if((i-s)>0){
		arr[i]=arr[i-s];
	}
 }
 for(int i=0; i<s;i++){
	arr[i]=temp[i];
 }
 }

int main() {
	int arr[]={10,20,30,40,50,60,70};
	int size;
	cin >>size;
	int shift;
	cin >> shift;
	shiftaArray(arr,size,shift);
	for(int i=0;i<size;i++){
		cout<< arr[i]<<" ";
	}
	return 0;
}