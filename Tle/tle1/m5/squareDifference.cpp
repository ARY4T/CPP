#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll a,b;
        cin>>a>>b;
        ll area = (a+b)*(a-b) ;
        ll divisors = 0;
        bool isPrime = true;
        if(a-b != 1) isPrime = false;
        if(isPrime){
        for(ll i=1; i*i<=a+b; ++i){
            if(area%i == 0) {
                if(i*i != area)
                divisors += 2;
                else divisors++;

                if(divisors > 2){
                    isPrime = false;
                    break;
                }
            }
        }
    }
        if(isPrime) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}