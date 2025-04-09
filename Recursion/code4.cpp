#include <iostream>
#include <vector>
#include <string>
using namespace std;


void printSubsequence(string str ,int i ,string op,vector<string>&ans){
// base case 
if (i == str.length()){
    // cout<< op << endl;
    ans.push_back(op);
    return ;
}
// recursive case 
char ch = str[i];
//include
//op.push_back(ch);
printSubsequence(str,i+1,op+ch,ans);
//exclude
printSubsequence(str,i+1,op,ans);
}


int main (){

string str ="abc";
string op ="";

int index = 0;
vector <string>ans;
printSubsequence(str,index ,op,ans);
cout<<"Ans lenght:"<<ans.size()<<endl;

for (auto i :ans){
    cout<<i<<endl;
}
    return 0;
}