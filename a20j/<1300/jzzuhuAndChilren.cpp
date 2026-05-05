#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    vector<int> v(n);
    int ind = n, currDiv = 0;

    for(int i=0; i<n; ++i) {
        cin>>v[i];
        if(ceil((double)v[i]/m) >= currDiv){
            currDiv = ceil(double(v[i])/m);
            ind = i+1;
        }
    }

    cout<<ind;

    
}