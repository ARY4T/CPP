#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1; cin>>s1;
    string s2; cin>>s2;
    string s3; cin>>s3;

    if(s1.size() + s2.size() > s3.size()){
        cout<<"NO";
    }
    vector<int> v(26);

    for(int i=0; i<s1.size(); ++i){
        v[s1[i]-'A']++;
    }
    for(int i=0; i<s2.size(); ++i){
        v[s2[i]-'A']++;
    }
    bool possible = true;

    for(int i=0; i<s3.size(); ++i){
        if(v[s3[i]-'A'] > 0) v[s3[i]-'A']--;
        else possible = false;
    }

    
    if(possible)cout<<"YES";
    else cout<<"NO";
}