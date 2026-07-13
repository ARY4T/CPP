#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int p;cin>>p;
        int a = 2,b = (p-1)/2;
        if(a==b) b = 2*a;
        cout<<a<<" "<<b;
        
    }      
    return 0;   
}