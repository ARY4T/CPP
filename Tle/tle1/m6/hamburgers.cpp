#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        string s;
        cin>>s;
        ll nb,ns,nc;
        cin>>nb>>ns>>nc;
        ll pb,ps,pc;
        cin>>pb>>ps>>pc;
        ll r;cin>>r;

        ll rb=0,rs=0,rc=0;
        cin>>rb>>rs>>rc;
        for(auto el: s){
            if(el=='B')rb++;
            else if(el == 'S')rs++;
            else rc++;
        }

        ll low = 0, high = 1e13;
        while(low<=high){
            ll mid = (low+high)/2;

            ll money_needed = 0;
            money_needed += max(0LL,mid*rb - nb) * pb;
            money_needed += max(0LL,mid*rs - ns) * ps;
            money_needed += max(0LL,mid*rc-nc)*pc;
            if(money_needed>r) high = mid-1;
            else low = mid+1;
        }
        cout<<high<<nl;
    }      
    return 0;   
}