#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, s; cin>>n>>s;

        vector<int> v(n);
        int maxSum = 0;
        vector<int> onesInd;
        int i = 0;
        
        for(int &el:v){
            cin>>el;
            if(el == 1) onesInd.push_back(i);
            maxSum += el;
            i++;
        }

        if(s>maxSum) cout<<-1<<nl;
        else {
            int rem = maxSum - s;
            
            if(rem == 0) cout<<0<<nl;
            else {
                int ops = INT_MAX;
                int m = onesInd.size();

                for(int i=0; i<=rem; ++i){
                    int currOps = 0;
                    int forw = 0;

                    if(i < rem) forw = onesInd[rem-i-1]+1;

                    int back = 0;

                    if(i>0) back = n-onesInd[m-i];

                    ops = min(ops, forw+back);
                }

                cout<<ops<<nl;
            }
        
        }
    }      
}