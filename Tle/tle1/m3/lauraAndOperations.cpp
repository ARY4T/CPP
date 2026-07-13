#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int countEven = 0;
        if(a%2==0) countEven++;
        if(b%2==0) countEven++;
        if(c%2==0) countEven++;
    
        if((countEven==0)||(countEven==3)){
            cout<<"1 1 1"<<nl;
            continue;
        }
        else if(countEven==2){
            if(a%2==0&&b%2==0){
              cout<<0<<" "<<0<<" "<<1<<nl;
              
            }
            else if(b%2==0&&c%2==0){
              cout<<1<<" "<<0<<" "<<0<<nl;
              
            }
            else{
              cout<<0<<" "<<1<<" "<<0<<nl;
              
            }
            continue;
        }
        else{
            if(a%2==0) cout<<1<<" "<<0<<" "<<0<<nl;
            else if(b%2==0) cout<<0<<" "<<1<<" "<<0<<nl;
            else cout<<0<<" "<<0<<" "<<1<<nl;
            continue;
        }
    }      
    return 0;   
}