#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        string s;cin>>s;
        map<char, int> charFreq;

        for(size_t i=0;i<s.length();++i){
            charFreq[s[i]]++;
        }

        bool possible = true;
        int oddCount = 0;
        char oddChar;


        for(auto const &[charac, count]:charFreq){
            if(count % 2 != 0){
                oddCount++;
                oddChar = charac;
                if(oddCount > 1){
                possible = false;
                break;
                }
            }
        }
        
        

        if(possible){
            string ans = "";
            for(auto const &[charac, count]:charFreq){
                ans += string(count/2, charac);
            }
            

            string secondHalf = ans;
            reverse(ans.begin(),ans.end());
            
            if(oddCount) ans += oddChar;

            ans+= secondHalf;
            cout<<ans;
        }
        else cout<<"NO SOLUTION";
    }     
    return 0;   
}