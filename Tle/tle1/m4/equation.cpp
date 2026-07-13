#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
bool isComposite(int n){
    int divisors = 0;
    for(int i=2;i*i<=n;++i){
        if(n%i==0) return true;    
            
        }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        int b = 2;
        bool run = true;
        while(run){
            if(isComposite(n+b)){
            if(isComposite(b)){
                cout<<n+b<<" "<<b;
                run = false;
                break;
            }
        }
        b++;
        }
    }      
    return 0;   
}