#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<int> arr(n);
        vector<int> indexMappingwValue(1e5+1);

        for(int i=0;i<n;++i) {
            cin>>arr[i];
            indexMappingwValue[arr[i]] = i+1;
        }
        int m;cin>>m;
        vector<int> queries(m);
        for(int i=0;i<m;++i) cin>>queries[i];
        
        ll search1=0,search2=0;
        
        for(auto query:queries){
            search1 += indexMappingwValue[query]; 
            int cnt = indexMappingwValue[query];
            search2 += n+1-cnt;
            
        }
        cout<<search1<<" "<<search2;
    }      
    return 0;   
}