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
        map<string,int> db;

        while(n--){
            string s;cin>>s;
            if(db.count(s)){
                int cnt = db[s];
                cout<<s+to_string(cnt)<<nl;
                db[s]++;
            }
            else{
                cout<<"OK"<<nl;
                db[s] = 1;
            }
        }
    }      
    return 0;   
}