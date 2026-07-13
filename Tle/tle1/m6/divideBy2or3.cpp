#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        int g=0;
        for(int i=0;i<n;++i) {
            cin>>v[i];
            g = gcd(g,v[i]);
        }
        ll ans = 0;
        for(int i=0;i<n;++i){
            int temp = v[i]/g;
            while(temp%2==0){
                temp/=2;
                ans++;
            }
            while(temp%3==0){
                temp/=3;
                ans++;;
            }
            if(temp!=1){
                cout<<-1<<nl;
                return 0;
            }
        }
        cout<<ans<<nl;
        
    }      
    return 0;   
}