#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int k;cin>>k;
        int hr=21,min=0;
        if(k>=60){
            hr+=1;
            min=k%60;
        }
        else{
            min=k;
        }
        if(min<10){
            cout<<hr<<':'<<0<<min;
        }
        else{
            cout<<hr<<':'<<min;
        }
    }      
        
}