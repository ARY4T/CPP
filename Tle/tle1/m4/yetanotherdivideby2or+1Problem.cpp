#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

bool isPalindrome(const string& s){
    int left = 0, right = s.length()-1;
    while(left<right){
        if(s[left] == s[right]) {
            left++;
            right--;
        }
        else return false;
    }
    return true;
}

bool isMonochrome(const string& s){
    if(s.length() <= 1) return true;

    char firstChar = s[0];
    for(size_t i = 1; i<s.length(); ++i){
        if(s[i] != firstChar) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;

    while(tc--){
        int n,k;
        cin>>n>>k;

        bool monoMode = false;
        string s;
        cin>>s;

        for(int i=0;i<k;++i){

            if(monoMode){
                s += s.back();
                continue;
            }
            if(isPalindrome(s)){
                if(isMonochrome(s)){
                    monoMode = true;
                }
                s += s[s.length()-1];
            }
            else {
                s = s.substr(0, s.length()/2);
            }
        }
        cout<<s<<nl;

    }      
    return 0;   
}