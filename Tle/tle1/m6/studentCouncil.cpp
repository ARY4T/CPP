#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
bool checker(ll mid,vector<ll> a, ll n, ll k){
    ll student = 0;
    for(auto el: a) student += min(mid, el);
    return student >= (mid*k);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        ll k;cin>>k;
        ll n;cin>>n;
        vector<ll> students(n);
        for(auto &grp: students) cin>>grp;
        
        ll low = 0, high = 0;
        for(auto el:students){
            high += el;
        }
        high /= k;

        while(low<=high){
            ll mid =(low+high)/2;
            if(checker(mid, students, n, k)){
                low = mid+1;
            }
            else high = mid -1;
        }
        cout<<high<<nl;
    }      
    return 0;   
}