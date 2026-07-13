#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        int sum = 0;
        for(int i=1;i<n;++i){
            int j;cin>>j;
            sum += j;
        }
        cout<<-1*sum<<nl;
    }      
    return 0;   
}