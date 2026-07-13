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

        ll ra = a;
        ll rb = b;

        while(ra%2 == 0){
            ra/=2;
        }
        while(rb%2 == 0){
            rb/=2;
        }

        if(ra != rb) cout<<-1<<nl;
        else{
            a /= ra;
            b /= rb;
            a = log2(a);
            b = log2(b);

            cout<< ceil(abs(a-b)/3.0) << nl;
        }
    }      
  
}