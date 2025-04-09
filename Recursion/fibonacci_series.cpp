#include <iostream>
using namespace std ;


//function to print fibonacci series
int sum (int n){
    //base case 
    // if (n==0){
    //     return 0;
    // }
    // if (n==1){
    //     return 1;
    // }
    if (n==0 || n==1){
        return n;
    }
    //recursion 
    int ans = sum(n-1) + sum(n-2);
    return ans;
}


int main(){

    int n ;
    cout <<"Enter the value of n " ;
    cin>>n;

    int final_ans = sum(n);
    cout<< "The fibbonacci series is :"<< final_ans<<endl;
    return 0;
}