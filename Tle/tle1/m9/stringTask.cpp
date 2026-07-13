#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        string s;
        cin>>s;
        set<char> vowels= {'a', 'o', 'y', 'e', 'u', 'i'};
        string ans = "";

        for(int i=0;i<s.length();++i){
            if(vowels.count(tolower(s[i]))){
                continue;
            }
            else{
                ans += '.';
                ans += tolower(s[i]);
            }
        }
        cout<<ans;
    }      
    return 0;   
}