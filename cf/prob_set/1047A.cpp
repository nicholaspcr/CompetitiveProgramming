#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

bool check(int n){
    int op = 0;
    while(n){
        op += n%10;
        n/=10;
    }
    return (op%3 == 0);
}

void solve(){	
    int n;
    vi v(3)
    cin >> n;
    for(int i = 0; i < 3; i++)
        v[i] = n/3;
    int op = n%3;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
