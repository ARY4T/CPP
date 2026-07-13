#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,x;
        cin>>n>>x;

        vector<pair<int,int>> v(n);
       
        int index = 1;
        for(auto &el:v) {
            cin>>el.first;
            el.second = index;
            index++;
        }
        
        sort(v.begin(), v.end());
        int left = 0, right = n-1;

        bool possible = false;
        vector<int> ans;
        while(left<right){
            if(v[left].first + v[right].first == x){
                possible =  true;
                ans.push_back(v[left].second);
                ans.push_back(v[right].second);
                break;
            }
            else if(v[left].first + v[right].first > x){
                right--;
            }
            else left++;
        }
        if(!possible) cout<<"IMPOSSIBLE";
        else{
            sort(ans.begin(),ans.end());
            cout<<ans[0]<<" "<<ans[1];
        }
    }      
    return 0;   
}