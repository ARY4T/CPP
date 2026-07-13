#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    int scenario = 1;
    while(tc--){
        int n,r;
        cin>>n>>r;

        map<pair<int,int>,int> mpp;
        bool isPossible = true;

        for(int i=0;i<r;++i){

            int stud,sub;
            cin>>stud>>sub;
            
            if(mpp.count({stud,sub})){
                isPossible = false;
            }
            else mpp[{stud,sub}] = 1;
            
        }
        cout<<"Scenario #"<<scenario<<": ";
        if(isPossible) cout<<"possible";
        else cout<<"impossible";
        cout<<nl;
        scenario++;
    }      
    return 0;   
}