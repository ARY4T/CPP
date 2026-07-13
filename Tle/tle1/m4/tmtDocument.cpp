#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n; cin>>n;
        string s;cin>>s;
        if(s[0] != 'T'||s[s.size()-1] != 'T'){
            cout<<"NO"<<nl;
            continue;
        }
        int tC=0,mC=0;
        bool cando=true;
        int tcnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='T') {tC++;tcnt++;}
            else mC++;
            if(s[i] == 'M') tcnt--;
            if(tcnt<0) {cando = false;break;}

        }
        tcnt = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='T') {tcnt++;}
            if(s[i] == 'M') tcnt--;
            if(tcnt<0) {cando = false;break;}
        }
        

        if(mC == tC/2 && cando) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}