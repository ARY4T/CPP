#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){

        ll n;cin>>n;

        vector<ll> size(n);
        for(int i=0;i<n;++i){
            cin>>size[i];
        }

        map<ll,ll> freq;
        for(int i=0;i<n;++i) freq[size[i]]++;

        ll flag=0;
        for(auto i:freq){
            if(i.second == 1){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<-1<<nl;
            continue;
        }

        vector<ll> students(n);
        for(int i=0;i<n;++i){
            students[i] = i+1;
        }

        ll l=0,r=0;
        while(r<n){
            if(size[l] == size[r]) r++;
            else{
                rotate(students.begin()+l, students.begin()+l+1,students.begin()+r);
                l=r;
            }
        }
        rotate(students.begin()+l,students.begin()+l+1,students.begin()+r);

        for(auto i:students)
            cout<<i<<" ";
       
        
        cout<<nl;

    }      
}