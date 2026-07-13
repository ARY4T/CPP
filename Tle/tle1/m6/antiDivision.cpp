#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
       ll a,b,c,d; 
       cin>>a>>b>>c>>d;

       ll divByC = b/c - (a-1)/c;
       ll divByD = b/d - (a-1)/d;

       ll bothCandD = b/lcm(c,d) - (a-1)/lcm(c,d);
       ll remove = divByC + divByD - bothCandD;
       cout<< b - a + 1 - remove<<nl;
    }      
    return 0;   
}