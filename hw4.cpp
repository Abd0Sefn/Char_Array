#include<iostream>
using namespace std;
int main(){
    string s, subsequence;
    cin >> s >> subsequence;
    int l = s.size(), subl = subsequence.size();
    int stop = 0; 
    for(int i = 0; i < subl; ++i){
        for(; stop < l; ++ stop){
            if(s[stop] == subsequence[i]){
                break;
            }
            else if(stop == l - 1){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}