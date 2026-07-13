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
        for(int i=0;i<n;++i) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int maxVal = arr[n-1];
        int expenditure = 0;
        for(auto wealth:arr){
            expenditure += maxVal - wealth;
        }
        cout<<expenditure;
    }      
    return 0;   
}