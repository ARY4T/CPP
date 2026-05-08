#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ab, bc, ca;
    cin>>ab>>bc>>ca;
    
    int b = (ab*bc)/ca;
    int a = (ab*ca)/bc;
    int c = (ca*bc)/ab;
    cout<< 4*(sqrt(a)+sqrt(b)+sqrt(c));
  
}