#include<iostream>
using namespace std;
using ll = long long;


int main(){
int t;
cin>>t;
while(t--){
   ll y,x;
   cin>>y>>x;

   if(x>y){
    if(x%2==1){
        cout<<x*x-y+1;
    }
    else{
        x--;
        cout<<x*x+y;
    }
   }

   else{
    if(y%2==0){
        cout<<y*y-x+1;
    }
    else{
        y--;
        cout<<y*y+x;
    }
   }
   
   cout<<endl;
}
    return 0;
}