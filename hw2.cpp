#include<iostream>
using namespace std;
int main(){
    string s, suffix;
    cin >> s >> suffix;
    int origin = s.size(), suff = suffix.size(), start = origin - suff;
    if(suff <= origin){
        for(int i = start; i < origin; ++i){
            if(s[i] != suffix[i - start]){
                cout << "NO\n";
                return 0;
            }
        }
    }
    else{
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}