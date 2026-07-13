#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,w;
        cin>>n>>w;
        vector<int> arr(n);
        
        for(int i=0;i<n;++i) {
            cin>>arr[i];
        }
        set<int> weight;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=w&&weight.find(arr[i])==weight.end()){
                cnt++;
                weight.insert(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int sum = arr[i] + arr[j];
                if(sum<=w&&weight.find(sum)==weight.end()){
                    cnt++;
                    weight.insert(sum);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    int sum = arr[i] + arr[j] + arr[k];
                    if(sum<=w && weight.find(sum) == weight.end()){
                        cnt++;
                        weight.insert(sum);
                    }
                }
            }
        }
        cout<< cnt<< nl;

        
    }      
    return 0;   
}