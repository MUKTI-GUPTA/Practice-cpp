#include <iostream>
using namespace std;

int max (int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

void Max_index(int arr [],int size,int index,int &ans){
    //base case 
    if (index ==size){
        return ;
    }
    //recursive call
    ans = max(ans, arr[index]);
    Max_index(arr,size,index+1,ans);
    //processing
}

void Min_index(int arr [],int size,int index,int &ans1){
    //base case 
    if (index ==size){
        return ;
    }
    //recursive call
    ans1 = min(ans1, arr[index]);
    Min_index(arr,size,index+1,ans1);
    //processing
}

void search(int arr[],int size ,int index,int target ){

    //base case 
    if(index == size){
        return;
    }

    if (arr[index]==target){
        cout <<"Element found at index :"<<index<<endl;

    }
    //recursion
    search(arr,size,index+1,target);
}
 
void print_array(int arr[],int size,int index){
    //base case 
    if(index==size){
        return;
    }
    //recursion
    cout<<arr[index]<<" ";
    print_array(arr,size,index+1);
}

void Print_all_odds(int arr[],int size,int index){
    //base case 
    if(index==size){
        return;
    }
    //recursion
    if((arr[index])&1){
        cout<<arr[index]<<" ";
    }
    Print_all_odds(arr,size,index+1);
}

void Print_all_evens(int arr[],int size,int index){
    //base case 
    if(index==size){
        return;
    }
    //recursion
    if(arr[index]%2==0){
        cout<<arr[index]<<" ";
    }
    Print_all_evens(arr,size,index+1);
}
int main(){
    int arr[]={10,20,5,3,60,40};
    int size =6;
    int index =0;
    int target = 30;
    int ans =INT_MIN;
   Print_all_odds(arr,size,index);
   cout<<endl;
   Print_all_evens(arr,size,index);
    // Max_index(arr,size,index,ans);
    // cout<<"The maximum element is :"<<ans<<endl; 
    // int ans1 =INT_MAX;
    // Min_index(arr,size,index,ans1);
    // cout<<"The minimum element is :"<<ans1<<endl;
    //search(arr,size,index,target);
    //print_array(arr,size,index);
    return 0;
}