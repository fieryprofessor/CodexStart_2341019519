/*
 * Name: Om Singh
 * Reg No: 2341019519
 * PS LINK: https://cses.fi/problemset/task/1618
 */

#include<iostream>
#include<math.h>
using namespace std;


int main(){
int n;
cin>>n;
int s=0;
while(n>0){
    s+=floor(n/5);
    n=n/5;
}
cout<<s;
    return 0;
}