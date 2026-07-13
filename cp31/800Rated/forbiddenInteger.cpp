#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,k,x;
        cin>>n>>k>>x;

        if(x != 1){
            cout<<"YES"<<nl;
            cout<<n<<nl;
            while(n--){
                cout<<1<<" ";
            }
            cout<<nl;
        }

        else{
            if(n == 1){
                cout<<"NO"<<nl;
            }
            else if(n % 2 == 0 && k>=2){
                cout<<"YES"<<nl;
                cout<<n/2<<nl;
                while(n){
                    cout<<2<<" ";
                    n -= 2;
                }
                cout<<nl;
            }
            else if(n % 2 != 0 && k>=3){
                cout<<"YES"<<nl;
                cout<<n/2<<nl;
                cout<<3<<" ";
                n -= 3;
                while(n){
                    cout<<2<<" ";
                    n -= 2;
                }
                cout<<nl;
            }
            else cout<<"NO"<<nl;
        }
    }      
    return 0;   
}