#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool isPoss = true;

        for (int i = 0; i < k; ++i)
        {   
            int ind = i;
            int cnt = 0;
            while(ind<n){
                if(s[ind] == '1') cnt++;
                ind += k;
            }

            if(cnt&1){
                isPoss = false;
                break;
            }
        }

        if (isPoss)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}