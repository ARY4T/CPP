#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    
    if(n&1){
        int movesInx = n/2;
        int movesIny = n/2+1;

        int totalOptions = 2*(movesInx+1)*(movesIny+1);
        cout<<totalOptions<<nl;

    }
    else{
        int movesInOneDir = n/2;
        int options = movesInOneDir+1;
        cout<<options*options<<nl;

    }
  
}