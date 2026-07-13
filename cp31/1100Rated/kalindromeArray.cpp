#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        for(int &el:v) cin>>el;
        
        bool isPalindrome = true;

        int l = 0, r = n-1;
        while(l<r){
            if(v[l] != v[r]){
                isPalindrome = false;
                break;
            }
            l++;
            r--;
        }

        int el1 = v[l], el2 = v[r];

        if(!isPalindrome){

            l=0, r=n-1;
            isPalindrome = true;

            while(l<r){
                while(v[l] == el1) l++;
                while(v[r] == el1) r--;
                if(l<r && v[l] != v[r]){
                    isPalindrome = false;
                    break;
                }

                l++;
                r--;
            }
        }
        
        if(!isPalindrome){
            l=0, r=n-1;
            isPalindrome = true;
            while(l<r){
                while(v[l] == el2) l++;
                while(v[r] == el2) r--;
                if(l<r && v[l] != v[r]){
                    isPalindrome = false;
                    break;
                }

                l++;
                r--;
            }
        }
    
        
        if(isPalindrome) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}