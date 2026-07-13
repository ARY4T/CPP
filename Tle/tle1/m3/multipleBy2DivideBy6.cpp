#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
            int n;cin>>n;
            int op=0;
            while(n!=1){
                if(n%6==0){
                    n /= 6;op+=1;
                }
                else if((n*2)%6==0){
                    n *= 2; n/=6;
                    op+=2;
                }
                else break;
            }
            cout<<(n==1?op:-1)<<endl;
    }      
        
}