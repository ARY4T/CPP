#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        
        if(a != b){
            pair<int,int> k1 = {xk+a,yk+b};
            pair<int,int> k2 = {xk-a,yk+b};
            pair<int,int> k3 = {xk-a,yk-b};
            pair<int,int> k4 = {xk+a,yk-b};

            pair<int,int> k5 = {xk+b,yk+a};
            pair<int,int> k6 = {xk-b,yk+a};
            pair<int,int> k7 = {xk-b,yk-a};
            pair<int,int> k8 = {xk+b,yk-a};

            vector<pair<int,int>> king = {k1,k2,k3,k4,k5,k6,k7,k8};

            pair<int,int> q1 = {xq+a,yq+b};
            pair<int,int> q2 = {xq-a,yq+b};
            pair<int,int> q3 = {xq-a,yq-b};
            pair<int,int> q4 = {xq+a,yq-b};

            pair<int,int> q5 = {xq+b,yq+a};
            pair<int,int> q6 = {xq-b,yq+a};
            pair<int,int> q7 = {xq-b,yq-a};
            pair<int,int> q8 = {xq+b,yq-a};

            vector<pair<int,int>> queen = {q1,q2,q3,q4,q5,q6,q7,q8};

            int cnt = 0;
            for(auto el:king){
                for(auto el1:queen){
                    if(el == el1) cnt++;
                }
            }
            cout<<cnt<<nl;
        }
        else{
            pair<int,int> k1 = {xk+a,yk+b};
            pair<int,int> k2 = {xk-a,yk+b};
            pair<int,int> k3 = {xk-a,yk-b};
            pair<int,int> k4 = {xk+a,yk-b};
            vector<pair<int,int>> king = {k1,k2,k3,k4};

            pair<int,int> q1 = {xq+a,yq+b};
            pair<int,int> q2 = {xq-a,yq+b};
            pair<int,int> q3 = {xq-a,yq-b};
            pair<int,int> q4 = {xq+a,yq-b};
            vector<pair<int,int>> queen = {q1,q2,q3,q4};

            int cnt = 0;
            for(auto el:king){
                for(auto el1:queen){
                    if(el == el1) cnt++;
                }
            }
            cout<<cnt<<nl;

        }
        
    }      
    return 0;   
}