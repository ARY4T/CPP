#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

const ll mod = 1e9 + 7;

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m)) % m;}  //only for prime m

// to get square root via bs
ll root(ll x){ll l=0,r=x;while(l<=r){ll m=(l+r)>>1;m*m<=x?l=m+1:r=m-1;}return r;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        
    }      
  
}
