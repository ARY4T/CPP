#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int a,b,k;
        cin>>a>>b>>k;
        if(a>b) swap(a,b);
        vector<int> divisors;
        for(int i=1;i<=a;++i){
            if(a%i == 0 && b%i == 0) divisors.push_back(i);
        }
        cout<<divisors[divisors.size()-k];
    }      
    return 0;   
}