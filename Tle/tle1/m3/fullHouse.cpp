#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
       vector<int> nums(5);
       for(int i=0;i<5;++i){
        cin>>nums[i];
       } 
       int card1{};
       int card2{};
       for(auto num:nums){
        if(card1 == 0||card1==num) card1=num;
        else if(card2 == 0) card2=num;

       }
       int count1{};
       int count2{};
       for(auto c:nums){
        if(c==card1) ++count1;
        else if(c==card2) ++count2;
       }
       if(count1>count2) swap(count1,count2);
       if(count1==2&&count2==3) cout<<"Yes";
       else cout<<"No";
    }      
        
}