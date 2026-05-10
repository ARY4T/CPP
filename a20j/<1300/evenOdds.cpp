#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin>>n>>k;
    
    ll mid = (n+1)/2;

    if(k<=mid){
        cout<<(k*2)-1;
    }
    else{
        cout<<(k-mid)*2;
    }
  
}