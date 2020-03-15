#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;



void solve(){
    int n, k; cin >> n >> k;
    vll v(n);
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int c = 0;
    for(int i = 0; i < n; i++){
        if(!v[i]){
           c = 0;
           continue;
        }
        int pos = 0; ll op = 1;
        while(op <= v[i]){
            op *= k;
            pos++;
        }
        pos--; op /= k;
        while(m[pos] && pos >= 0){
            pos--;
            op /= k;
        }
        if(pos >= 0) v[i] -= op;
        else c = 1;
        if(c){
            //cout << pos << endl;
            cout << "NO\n";
            return;
        }else{
            m[pos] = 1;
        }
        i--;
    }
    cout << "YES\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
