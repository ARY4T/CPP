#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int y, w; 
        cin>>y>>w;
        
        y = max(y, w);
        int num = 7-y;
        int den = 6;
        for(int i=2; i<=6; ++i){
            if(num%i == 0 && den%i ==0){
                num = num/i;
                den = den/i;
            }
        }

        cout<<num<<"/"<<den;
    }      
  
}