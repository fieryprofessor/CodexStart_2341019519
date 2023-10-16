#include<iostream>
using namespace std;
using ll = long long;

int main(){
int n;
cin>>n;
if(n==1){
    cout<<1;
    return 0;
}
if(n==2 || n==3){
    cout<<"NO SOLUTION";
    return 0;
}
string s="";
for(ll i=1;i<=n;i++){
if(i%2==0){
    cout<<i<<" ";
}
else{
    s+=to_string(i)+" ";
}
}
cout<<s;
    return 0;
}