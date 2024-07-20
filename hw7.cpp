#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    cout << s[0];
    int cnt{1};
    for(int i = 1; i < len; ++i){
        if(s[i] != s[i - 1]){
            cout << cnt << "_" << s[i];
            cnt = 1;
             if( i == len - 1)
                cout << cnt;
        }
        else if(i == len - 1)
        cout << cnt + 1;
        else
        cnt ++;
    }
    return 0;
}