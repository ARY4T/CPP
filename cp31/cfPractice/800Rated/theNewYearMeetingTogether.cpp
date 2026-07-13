#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int x1, x2, x3;
        cin>>x1>>x2>>x3;
        int r,l;

        if(x1>x2){
            if(x1>x3) {
                r = x1;
                if(x2>x3) l = x3;
                else l = x2;
            }
            else {
                r = x3;
                l = x2;
            }

        }
        else{
            if(x2>x3) {
                r = x2;
                if(x1>x3) l = x3;
                else l = x1;
            }
            else {
                r = x3;
                l = x1;
            }
        }

        cout<<r-l;
    }      
  
}