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


void solve(){
    int m, k;
    cin >> m >> k;
    if(m == 1 && k == 0){
        printf("0 0 1 1\n");
    }else if(m == 1 && k != 0){
        cout << -1 << endl;
    }else if( k >= (1<<m) ){
        cout << -1 << endl;
    }else{
        for(int i = 0; i < (1<<m); i++){
            if(i == k) continue;
            printf("%d ", i);
        }
        printf("%d ", k);
        for(int i = (1<<m)-1; i >= 0; i--){
            if(i == k)continue;
            printf("%d ", i);
        }
        printf("%d\n", k);
    }
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
