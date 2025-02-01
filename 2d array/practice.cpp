#include <bits/stdc++.h>
#include <vector>
using namespace std;
// finding a given no 
 bool findTarget(vector<vector<int>> arr,int rowsize ,int colsize, int target){
	for(int i=0; i<rowsize; i++){
	 for(int j=0; j<colsize; j++){
	if (arr[i][j]==target){
		return true;
	}
	 }
  }
  return false;
 }
// finding the maximum number
void findmax(vector<vector<int>> arr,int rowsize ,int colsize){
	int maxval = INT_MIN;
	 for(int i=0; i<rowsize; i++){
	 for(int j=0; j<colsize; j++){
		// if(arr[i][j]>max){
		// 	max = arr[i][j];
		// }
		maxval=max(maxval,arr[i][j]);
	 }
  }
  cout<<"the maximum no is :";
  cout<<maxval<<endl;
  }
// find the minimum number 
void findMin(vector<vector<int>> arr,int rowsize ,int colsize){
	int minval = INT_MAX;
	 for(int i=0; i<rowsize; i++){
	 for(int j=0; j<colsize; j++){
		// if(arr[i][j]<a){
		// 	a = arr[i][j];
		// }
		minval=min(minval,arr[i][j]);
	 }
  }
  cout<<"the minimum no is :";
 cout<<minval<<endl;
  }
// finding the sum of rows 
void sumofRow(vector<vector<int>> arr){
	 int rowsize=arr.size();
	 int colsize= arr[0].size();
	
	 for(int i=0; i<rowsize; i++){
		 int sum=0;
	 for(int j=0; j<colsize; j++){
		sum=arr[i][j]+sum;
		
	 }
	 cout<<"the sum of rows"<<sum<<endl;
  }
}
// finding the sum of columns
void sumofcol(vector<vector<int>> arr){
	 int rowsize=arr.size();
	 int colsize= arr[0].size();
	
	for(int j=0; j<colsize; j++) {
		 int sum=0;
	for(int i=0; i<rowsize; i++){
		sum=arr[i][j]+sum;
		
	 }
	 cout<<"the sum of columns"<<sum<<endl;
  }

}
// finding the sum of diagonals 
void diagnolsum(vector<vector<int>>arr ,int rowsize ,int colsize){
	// first method
int sum =0;
for (int i =0;i<rowsize;i++){
	for (int j =0;j<colsize;j++){
		if (i==j){
			 sum =arr[i][j] +sum;
		}
	} 	
}
cout<<"The sum of Diagonals is :"<<sum;
// second method
// 	for(int i =0;i<rowsize;i++){
			
// 		 sum =arr[i][i] +sum;
			
// 	}
// 	cout<<sum;
 }
//  finding the altnate diagoal sum 
void altDiagonalSum(vector<vector<int>>arr,int rowsize,int colsize){

int sum =0;
for(int i =0;i<colsize;i++){
	sum = sum + arr[i][colsize-i-1];
}
cout <<"The sum of Diagonals is :"<< sum;
}
// transpose of the matrix
void transposeMatrix(vector<vector<int>>arr,int rowsize,int colsize){
// 	vector<vector<int>>transpose (colsize,vector<int>(rowsize,0));
	
// 	for(int i =0;i<rowsize;i++){
// 		for(int j =0;j<colsize;j++){
// 			transpose[i][j]=arr[j][i];
// 		}	
// 	}
// 	cout <<"the Transpose arr is :"<<endl;
// 	 for(int i=0; i<rowsize; i++){
// 	 for(int j=0; j<colsize; j++){
	
// 		cout << transpose[i][j]<<" ";
// 	 }
// 	 cout<<endl;
//   }

	for(int i =0;i<rowsize;i++){
		for(int j =i;j<colsize;j++){
			swap(arr[i][j],arr[j][i]);
		}	
	}
	 for(int i=0; i<rowsize; i++){
	 for(int j=0; j<colsize; j++){
	
		cout << arr[i][j]<<" ";
	 }
	 cout<<endl;}
//   
	}



int main() {
  vector<vector<int>> arr(4,vector<int>(4,0));
  int rowsize = arr.size();
  int colsize = arr[0].size();
  int target =40;
  	// cout<<"enter the values"<<endl;;
  for(int i=0; i<rowsize; i++){
	 for(int j=0; j<colsize; j++){
	
		cin>> arr[i][j];
	 }
  }

// sumofRow(arr);
// sumofcol(arr);
// diagnolsum(arr ,rowsize , colsize);
// findMin(arr, rowsize , colsize);
// findmax(arr, rowsize , colsize);
// altDiagonalSum(arr ,rowsize , colsize);

// bool ans =findTarget(arr, rowsize , colsize,  target);
// cout << "the answer is "<< ans;
transposeMatrix(arr,rowsize,colsize);

	return 0;
}