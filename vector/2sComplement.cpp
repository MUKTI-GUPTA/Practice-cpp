#include<iostream>
#include<vector>
using namespace std;

vector<int> findTwoscomplement(vector<int>binary){
    int n = binary.size();

    vector<int>twoscomp( n+1, 0);

    for (int i =n-1, k=twoscomp.size()-1;i>=0;i--,k--)
        twoscomp[k]=binary[i]==0 ? 1 : 0 ;


        
    int carry =1;
    for(int i = twoscomp.size()-1;i>=0;i--){
        int sum =twoscomp[i]+carry;
        twoscomp[i]=sum % 2;
        carry = sum/2;
        }
        if(carry){
            twoscomp[0]=carry;
        }
    return twoscomp;
    }



    vector<int> findTwoscomplement2(vector<int>binary){
    int n = binary.size();

    vector<int>twoscomp( n, 0);

    for (int i =n-1, k=n-1;i>=0;i--,k--)
        twoscomp[k]=binary[i]==0 ? 1 : 0 ;


        
    int carry =1;
    for(int i = twoscomp.size()-1;i>=0;i--){
        int sum =twoscomp[i]+carry;
        twoscomp[i]=sum % 2;
        carry = sum/2;
        }
       
    return twoscomp;
    }


int main(){

vector<int> binary = {0,0,0,0};
vector<int> twosComplement= findTwoscomplement(binary);
vector<int> twosComplement2= findTwoscomplement2(binary);
cout<<"2's complement of binary number is : ";
for (int i =0;i<twosComplement.size();i++){
    cout<<twosComplement[i]<<" ";
}
cout<<endl;
cout<<"2's complement of binary number is : ";
for (int i =0;i<twosComplement2.size();i++){
    cout<<twosComplement2[i]<<" ";
}



    return 0;

}