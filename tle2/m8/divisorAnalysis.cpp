#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int const mod = 1e9+7;

ll expoMod(ll a, ll b){
    if(b == 0) return 1;

    ll prod = (1LL*a*a)%mod;
    
    ll exp = expoMod(prod, b/2);
    exp %= mod;

    if(b&1) {
        exp *= (a%mod);
        exp %= mod;
    }

    return exp;
}

ll mulMod(ll a, ll b){
    return ((1LL*a*b)%mod + mod)%mod;
}

ll mminprime(ll b, ll p){
    return(expoMod(b, p-2)%p);
}

ll divMod(ll a, ll b){
    return (mulMod(a, mminprime(b, mod))%mod);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n; cin>>n;
    vector<int> prime(n), power(n);

    for(int i=0; i<n; ++i){
        cin>>prime[i];
        cin>>power[i];
    }      

    //number of divisor
    ll numDivisor = 1;

    for(int i=0; i<n; ++i){
        numDivisor *= (power[i]+1);
        numDivisor %= mod;
    }

    cout<<numDivisor<<" ";

    //sum of divisors
    ll sumDivisors = 1;

    for(int i=0; i<n; ++i){
        ll nume = (expoMod(prime[i], power[i]+1) - 1 + mod)%mod;
        ll den = prime[i] - 1;

        sumDivisors = (sumDivisors* divMod(nume, den))%mod;
    }

    cout<<sumDivisors<<" ";
    
    //prod of divisors
    ll prod = 1, divCount = 1;

    for(int i=0; i<n; ++i){
        prod = expoMod(prod, power[i]+1);
        prod %= mod;

        ll temp = (1LL*power[i]*(power[i]+1)/2)%(mod-1);
        temp = (temp*divCount)%(mod-1);

        prod = mulMod(prod, expoMod(prime[i], temp))%mod;

        divCount *= power[i]+1;
        divCount %= (mod-1);

    }

    cout<<prod<<" ";
  
}