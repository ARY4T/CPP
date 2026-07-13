#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    int n;cin>>n;

    string g1="",g2="",g3="";

    for(int i=0;i<s1.size();++i){
        if(isalpha(s1[i])) g1+= tolower(s1[i]);
    }

    for(auto ch:s2){
        if(isalpha(ch)) g2+= tolower(ch);
    }

    for(auto ch:s3){
        if(isalpha(ch)) g3+= tolower(ch);
    }


    string comb1, comb2, comb3, comb4, comb5, comb6;
    comb1 = g1+g2+g3;
    comb2 = g1+g3+g2;
    comb3 = g2+g1+g3;
    comb4 = g2+g3+g1;
    comb5 = g3+g1+g2;
    comb6 = g3+g2+g1;
    


    while(n--){
        string s;cin>>s;
        string g;
        for(auto ch:s){
            if(isalpha(ch)) g+=tolower(ch);
        }

        if(g == comb1 || g == comb2 || g == comb3 || g == comb4 || g == comb5 || g == comb6){
            cout<<"ACC"<<nl;
        }
        else cout<<"WA"<<nl;
        
    }
}