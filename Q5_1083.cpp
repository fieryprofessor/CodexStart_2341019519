#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int main(){
ll n;
cin>>n;
vector<int>v(n-1);
for(ll i=0;i<n-1;i++){
    cin>>v[i];
}
ll s1=0;
for(int i=0;i<n-1;i++){
    s1+=v[i];
}
ll s =n*(n+1)/2;
ll x = s - s1;
cout<<x;
return 0;
}