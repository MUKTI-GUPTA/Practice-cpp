#include <iostream>
using namespace std;

int sqrt(int n){

    int start=0;
    int end =n;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<end){
        mid = start +(end -start)/2;
        if(mid*mid<=n){
            ans =mid;
            start =  mid +1;
        }
        else {
            end = mid -1;
        }
    }
    return ans;
}

double sqrt_precision(int n){
  
    double mysqrt = sqrt(n);
    int  precision =9;
    double step = 0.1;
    while (precision--){
        double j = mysqrt;
        while(j*j<=n){
            mysqrt = j;
            j += step;
        }
        step /=10;
    }

return mysqrt;
}

double BSprecision (int n){
    double s=0;
    double e = n;
    double ans = 0;
    while((e-s)>0.000000001){
        double mid = s+(e-s)/2;
        double sqrt = mid *mid;
        if (sqrt<=n){
            ans = mid;
            s = mid;
        }
        else{
            e = mid;
        }

    }
    return ans;
}


int main (){
      int n = 63;
    double  answer =sqrt_precision (n);

    printf("Squareroot Precision: %.9f\n" , answer);

    double ans =BSprecision(n);
        
    printf("Squareroot Precision: %.9f\n" , ans);


    return 0;
}