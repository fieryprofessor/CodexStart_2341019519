#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;

int main(){

string s;
cin>>s;

int n=s.length();
int m=0,c=1;
for(ll i=1;i<n;i++){
   if(s[i]!=s[i-1]){
    m= max(m,c);
    c=1;
   }
   else{
    c++;
   }
}
m=max(m,c);
cout<<m;
    return 0;
}