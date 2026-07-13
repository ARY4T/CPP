#include <bits/stdc++.h>
using namespace std;

#define nl "\n";
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc{1}; cin>>tc;

    while(tc--){
        int n;cin>>n;
        vector<int> a(n), d(n);

        for(int &el:a) cin>>el;
        for(int &el:d) cin>>el;
        int l = -1,r = -1;

        for(int i=0; i<n; ++i){
            if(l == -1 && a[i] != d[i]) l = i;
            if(r == -1 && a[n-1-i] != d[n-1-i]) r = n-1-i;
            if(l!=-1 && r!=-1) break;
        }
        while(l>0 && d[l-1]<=d[l]) l--;
        while(r<n-1 && d[r+1]>=d[r]) r++;

        cout<<l+1<<" "<<r+1<<nl;  
    }
}


