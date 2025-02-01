#include<iostream>
#include<vector>
using namespace std;

 vector<int> findComplement(vector<int>binary){

    int n = binary.size();
    vector<int>oneComplement(n,0);

    for (int i=n,k=oneComplement.size();i>=0;i--,k--){
        oneComplement[k]=binary[i] == 0 ? 1:0;
    }
    return oneComplement;
    
 }

int main(){

vector<int>binary = {0,1,1,0,1};
vector<int>oneComplement=findComplement(binary);

for(int i=0;i<=oneComplement.size()-1;i++){
    cout<<oneComplement[i]<<" ";
}
return 0;
}