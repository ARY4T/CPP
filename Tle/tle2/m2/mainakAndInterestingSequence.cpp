#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,m;
        cin>>n>>m;

        if(n>m) cout<<"NO"<<nl;
        else{
            if(m%2==0){
                cout<<"YES"<<nl;
                if(n%2==0){  
                    for(int i=0; i<n-2; ++i){
                        cout<<1<<" ";
                    }
                    cout<<(m-(n-2))/2<<" "<<(m-(n-2))/2<<nl;
                }
                else{
                    for(int i=0; i<n-1; ++i){
                        cout<<1<<" ";
                    }
                    cout<<m-(n-1)<<nl;
                }
            }
            else{

                if(n%2==0) cout<<"NO"<<nl;
                else{
                    cout<<"YES"<<nl;
                    for(int i=0; i<n-1; ++i){
                        cout<<1<<" ";
                    }
                    cout<<m-(n-1)<<nl;
                }
            }
        }
    }      
  
}