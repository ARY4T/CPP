#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

void calculateRun(int n,vector<int> arr,map<int,int>& cnt){
    if(n==0)return;

    for(int i=0;i<n;){
        int curVal = arr[i];
        int j=i;

        while(j<n && arr[j] == curVal){
            j++;
        }
        int runLen = j-i;

        cnt[curVal] = max(runLen, cnt[curVal]);
        i=j;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);

        set<int> nums;

        for(auto &el:v1){
            cin>>el;
            nums.insert(el);
        }
        for(auto &el:v2){
            cin>>el;
            nums.insert(el);
        }

        map<int,int> cntA;
        map<int,int> cntB;

        calculateRun(n, v1, cntA);
        calculateRun(n, v2, cntB);

        int maxLen = 0;

        for(auto num:nums){
            int lenA = cntA.find(num) != cntA.end() ? cntA[num] : 0;
            int lenB = cntB.find(num) != cntB.end() ? cntB[num] : 0;

            maxLen = max(maxLen, lenA+lenB);
        }
        cout<<maxLen<<nl;

    }      
  
}