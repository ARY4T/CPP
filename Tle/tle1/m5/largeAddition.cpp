#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%10 == 9) {
            cout<<"NO"<<nl;
            continue;
        }
        n/=10;
        bool flag = true;
        while(n>=10){
            int lastDig = n%10;
            if(lastDig == 0){
                flag = false;
                break;
            }
            n /= 10;
        }
        if(n%10 != 1||!flag){
            cout<<"NO"<<nl;
            continue;
        }
        cout<<"YES"<<nl;
    }      
    return 0;   
 }