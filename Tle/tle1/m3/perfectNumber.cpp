#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int index;cin>>index;

        vector<int> perfectNums;
        int i = 1;
        while(perfectNums.size()<index){
            int sum = 0;
            int num = i;
            while(num > 0){
                int lastNum = num%10;
                sum += lastNum;
                num /= 10;
            }
            if(sum == 10) perfectNums.push_back(i);
            i++;
        }

        cout<<perfectNums[index-1];
    }      
    return 0;   
}