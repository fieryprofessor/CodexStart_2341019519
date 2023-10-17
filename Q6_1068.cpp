/*
 * Name: Om Singh
 * Reg No: 2341019519
 * PS LINK: https://cses.fi/problemset/task/1068
 */

#include<iostream>
using namespace std;
using ll = long long;

int main(){
ll n;
cin>>n;
while(n>1){
cout<<n<<" ";
if(n%2==0)
n=n/2;
else
n=(n*3)+1;
}
cout<<1;
    return 0;
}