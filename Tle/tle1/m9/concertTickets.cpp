#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,m;
        cin>>n>>m;

        multiset<int> ticketPrice;
        for(int i=0;i<n;++i){
            int p;cin>>p;

            ticketPrice.insert(p);
        }
        vector<int> customerBid(m);
        for(auto &el:customerBid) cin>>el;

        for(int i=0;i<m;++i){
            auto it = ticketPrice.upper_bound(customerBid[i]);

            if(it == ticketPrice.begin()){
                cout<<-1<<nl;
            }
            else{
                cout<<*(--it)<<nl;
                ticketPrice.erase(it);
            }
   
        }
        

    }      
    return 0;   
}