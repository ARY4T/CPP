#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long year{};cin>>year;
    string num = to_string(year);
    int first_digit=num[0]-'0';
    string lucky_y{};
    if(first_digit == 9){
        lucky_y += 1 + '0';
        int s_length = num.length();
        for(int i=0;i<s_length;++i){
            lucky_y += '0';
        }
    }
    else{
        lucky_y += (first_digit+1) + '0';
        int s_length = num.length();
        for(int i=1;i<s_length;++i){
            lucky_y += '0';
        }
    }

    long long lucky_year= stoll(lucky_y);
    cout<<lucky_year-year<<endl;

}