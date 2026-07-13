#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        
        ll positiveSum=0;
        ll remNegative=0;
        for(int i=0;i<n;++i){
            if(arr[i]==0) continue;
            else if(arr[i]>0) positiveSum+=arr[i];
            else if(arr[i]<0){
                if(positiveSum-abs(arr[i])>=0){
                    positiveSum -= abs(arr[i]);
                }
                else if(min(positiveSum,abs(arr[i]))>0){
                    arr[i] += positiveSum;
                    positiveSum=0;
                    remNegative += abs(arr[i]);
                }
                else remNegative += abs(arr[i]);
                
            }
            }
        cout<<remNegative<<nl;

        
        
        
    }      
    return 0;   
}