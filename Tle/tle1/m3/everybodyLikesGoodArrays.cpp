#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int is_good(vector<ll> &arr, bool &isgood) {
    int n = arr.size();
    int change = 0;
    vector<ll> temp;
    for(int i = 0; i < n; ++i) {
        
        if(i < n-1 && arr[i] % 2 == arr[i+1] % 2) {  // <- This condition was missing!
            if(arr[i] % 2 == 1) {
                temp.push_back(1); 
            } else {
                temp.push_back(2); 
            }
            change++;
            i++;
        } 
        else {
            temp.push_back(arr[i]);
        }
    
    }
    if(change > 0) isgood = false;
    else isgood = true;
    arr = temp;
    return change;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> nums(n);
        for(int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        int changes = 0;
        bool good = false;
        while(!good) {
            changes += is_good(nums, good);
        }
        cout << changes << endl;
    }      
}