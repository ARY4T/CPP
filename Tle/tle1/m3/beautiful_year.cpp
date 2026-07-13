#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int y{};cin>>y;
        
        for(int i=y+1;i<=INT_MAX;++i){
            vector<int> nums;
            int eg=i;
            while(eg>0){
                nums.push_back(eg%10);
                eg /= 10;
            }
            int num1 = nums[0],num2=nums[1],num3=nums[2],num4=nums[3];
            if(set<int>{num1, num2, num3, num4}.size() == 4){cout<<i;break;}
            
        }
    }      
        
}