#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

bool isPalim(string str){
    string op = str;
    reverse(all(op));
    //cout << "reverse -> " << op << endl;
    for(int i = 0; i < str.size(); i++){
        if(str.size() & 1 && str.size()/2 == i) continue;
        if(str[i] != op[i]) return false;
    }
    return true;
}

void solve(){
    string str;
    cin >> str;
    int n = str.size();
    string l, r;
    for(int i = 0; i < (n-1)/2; i++)
        l += str[i];
    for(int i = (n+2)/2; i < n; i++)
        r += str[i];

    //cout << l << " " << r << endl;
    //cout << str << endl;
    bool a = isPalim(l);
    bool b = isPalim(r);
    if(isPalim(str) && a && b)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
