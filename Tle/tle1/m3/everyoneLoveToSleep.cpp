#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int minSleepTotal=24*60; // minutes
        while(n--){
            int h,m;
            cin>>h>>m;
            int sleepTotalMin;
            if(h<H||h==H&&m<M) {
                //next day alarms
                sleepTotalMin = (24-H)*60-M + h*60 + m;

            }
            else{
                //same day alarm
                sleepTotalMin = (h-H)*60 + (m-M);

            }
            minSleepTotal = min(minSleepTotal, sleepTotalMin);
            
        
        }
        int sleepHr = minSleepTotal/60;
        int sleepMin = minSleepTotal%60;
        cout<<sleepHr<<" "<<sleepMin<<endl;

    }      
        
}