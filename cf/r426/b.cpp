#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    map<char,pi> mpi;
    for(char i = 'A'; i <= 'Z'; i++){
        mpi[i] = MP(-1,-1);
    }
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(mpi[s[i]].F == -1)
            mpi[s[i]] = MP(i,i+1);
        else
            mpi[s[i]].S = i;
    }

    vi track(n+1);
    for(char i = 'A';i <= 'Z'; i++){
        if(mpi[i].F == -1)continue;
        track[mpi[i].F]++;
        track[mpi[i].S]--;
    }

    int op = 0;
    for(int i = 0; i <= n;i++){
        op += track[i];
        if(op > k){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
