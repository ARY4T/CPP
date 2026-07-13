#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,k;cin>>n>>k;
        
        vector<int> primes;
        for(int i=2;i<=n;++i){
            int divisors = 0;
            bool isPrime = true;
            for(int j=1;j*j<=i; ++j){
                if(i%j == 0) {
                    if(j*j != i) divisors+=2;
                    else divisors+=1;

                    if(divisors>2) {
                        isPrime = false;
                        break;
                    }
                }

            }
            if(isPrime) primes.push_back(i);

        }

        for(int i=0;i<primes.size()-1; ++i){
            if(binary_search(primes.begin(),primes.end(),primes[i]+primes[i+1]+1)) k--;
        }
        if(k>0) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }      
    return 0;   
}