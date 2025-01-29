#include <bits/stdc++.h>
using namespace std;
pair<int, int> check2sumPair(int arr[],int size,int target){
	pair<int, int> p = make_pair (-1,-1);
	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if (arr[i]+arr[j]==target){
				p.first= arr[i];
				p.second = arr[j];
				 return p;
			}
		}
	}
	return p;
}
void printallPairs(int arr[],int n,int target){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (arr[i]+arr[j]==target){
				cout<< arr[i]<<" "<<arr[j]<< endl;
			}
		}
	}
}
int main() {
	int arr[]={10,15,5,20,30};
	int size;
	int target ;
cin>> size;
cin>>target;
	pair<int ,int> ans =check2sumPair(arr,size,target);
	if(ans.first==-1 && ans.second==-1){
		cout<<"pair not found"<<endl;
	}
	else{
		cout<<"pair found "<< ans.first<<" , "<<ans.second<< endl;
	}
	printallPairs(arr,size,target);
	return 0;
}