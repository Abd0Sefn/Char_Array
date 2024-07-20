#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string s,pre;
    cin >> s >> pre;
    if ( pre.size() <= s.size()){
        for(int i = 0; i < pre.size(); ++i){
            if(pre[i] != s[i]){
                cout << "NO\n";
                return 0;
            }
        }
    }
    else {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}