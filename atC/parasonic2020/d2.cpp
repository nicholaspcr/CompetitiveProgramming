#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> pi;

void solve(){
    int n; cin >> n;
    vector<string> vs;
    for(int i = 0; i < n; i++){
        string str = "";
        for(int j = 0; j < n; j++){
            str += 'a';
        }
        char ch = 'a';
        str[n-1] = (ch + vs.size());
        vs.PB(str);
    }
    for(int i = 0; i < n; i++)
        cout << vs[i] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
