#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll c=0;
    for(ll i=1;i<n;i++){
        if (v[i]>=v[i-1]){
            continue;
        }
        else{
            c+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<c;
    return 0;
}