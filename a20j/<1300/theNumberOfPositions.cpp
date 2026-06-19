#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a, b;
    cin>>n>>a>>b;

    int cnt = min(n - a, b+1);
    cout<<cnt; 
  
}