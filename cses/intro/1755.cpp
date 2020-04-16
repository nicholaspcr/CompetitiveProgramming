#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    string s; cin >> s;
    map<char, int> m;
    for(int i = 0 ; i < s.size(); i++) m[s[i]]++;

    pair<int, char> p = MP(0,'-');
    string ans = "";
    for(char i = 'A'; i <= 'Z'; i++){
        if(m[i] & 1){
            if(p.F != 0){
                cout << "NO SOLUTION\n";
                return;
            }else{
                p.F = m[i];
                p.S = i;
            }
        }else{
            for(int j = 0; j < m[i]/2; j++){
                ans += i;
            }
        }
    }
    for(int i = 0; i < p.F; i++)
        ans += p.S;

    string op = "";
    int maxi = (p.F)? ans.size()-p.F-1 : ans.size()-1;
    for(int i = maxi; i >= 0; i--){
        op += ans[i];
    }
    ans += op;
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
