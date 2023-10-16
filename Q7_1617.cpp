#include<iostream>
using namespace std;
using ll = long long;

ll pow(int p,ll n ,ll mod){
   ll ans = 1;
   for(ll i=0;i<n;i++){
    ans=ans*p%mod;
   } 
   return ans;
}

int main(){
ll n;
cin>>n;
cout<<pow(2,n,1e9+7);
    return 0;
}