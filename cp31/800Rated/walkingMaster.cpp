#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b || d-b < c-a){
            cout<<-1<<nl;
        }

        else{
            cout<<d-b+((a+d-b))-c<<nl;
        }
    }      
    return 0;   
}