#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        int a = -1, b = -1;

        for(int i=2; i*i<= n; ++i){
            if(n%i == 0){
                a = i;
                n /= i;
                break;
            }
        }

        if(a!=-1){
            for(int i=a+1; i*i<=n; ++i){
                if(n%i == 0){
                    b = i;
                    n/=i;
                    break;
                }
            }
        }

        if(a!= -1 && b!=-1 && n>b){
            cout<<"YES"<<nl;
            cout<<a<<" "<<b<<" "<<n<<nl;
        }
        else cout<<"NO"<<nl;
    }      
  
}