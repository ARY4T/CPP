#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s;
    }      
    return 0;   
}