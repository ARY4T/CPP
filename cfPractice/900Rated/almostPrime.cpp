#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    
    vector<int> v(3001);

    for(int i=0; i<=3000; ++i){
        v[i] = i;
    }

    for(int i=2; i*i<=n; ++i){
        if(v[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(v[j] == j) v[j] = i;
            }
        }
    }

    int ans{};

    for(int i=4; i<=n; ++i){
            int num = i;
            
            vector<int> primes;

            while(num != 1){
                primes.push_back(v[num]);
                int pr = v[num];

                while(num%pr == 0){
                    num/=pr;
                }
            }

        if(primes.size() == 2){
           ans++;
        }
    }

    cout<<ans;
    
  
}