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
    
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    if(v[n-1]==1){
        cout<<"NO"<<nl;
        continue;
    }
    cout<<"YES"<<nl;

    int count=0;

    for(int i=n-1;i>=0;i--){

        if(v[i]==1) count++;

        if(i==0){
            if(v[i]==1){
                cout<<count;
            }
            else{
                cout<<0;
            }
        }

        else if(v[i]==1 and v[i-1]==0){
            cout<<count<<' ';
            count=0;
        }

        else{
            cout<<0<<' ';
        }
    }
    cout<<nl;

    }      
    return 0;   
}