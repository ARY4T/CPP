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

        map<string,string> mpp;
        for(int i=0;i<n;++i){
            string chef,country;
            cin>>chef>>country;
            mpp[chef] = country;     
        }

        map<string,int> chefVotes;
        map<string,int> countryVotes;

        for(int i=0;i<m;++i){
            string chef;cin>>chef;
            chefVotes[chef]++;
            countryVotes[mpp[chef]]++;
        }
        
        string winnerChef = "";
        int maxVotes = -1;
        
        for(auto &el : chefVotes){
            if(el.second > maxVotes){
                maxVotes = el.second;
                winnerChef = el.first;
            }
            
        }
        maxVotes = -1;
        string winnerCountry = "";
        for(auto &el : countryVotes){
            if(el.second > maxVotes){
                maxVotes = el.second;
                winnerCountry = el.first;
            }
            
           }

        cout<<winnerCountry<<nl<<winnerChef;

        
        
    }      
    return 0;   
}