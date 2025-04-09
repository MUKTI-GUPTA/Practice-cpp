#include <iostream>
using namespace std;
//preprocessing
void print_count(int n){
    
    //base case
    if (n==0){
        return;
    }
      //recursive call
      print_count(n-1);
    //processing
    cout<<n<<" ";

  
}


int getFactorial(int n){
    //base case
    if (n==0  || n==1){
        return 1;
    }
    //recursive call 
    int recursion_ans= getFactorial(n-1);
    int finalans = n*recursion_ans;
    return finalans;
    //processing
}

int main (){
    int n;
    cout<<"Enter the value of n: " ;
    cin>>n;

    print_count(n);
    
    // int ans = getFactorial(n);
    // cout<<"The Factorial of n is :"<< ans << endl;


    return 0;
}