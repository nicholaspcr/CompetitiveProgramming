#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b) / gcd(a,b);
}

void solve(){
    int n; cin >> n;
    int maxi = (n > 1000) ? sqrt(n)/10 : n;
    //cout << gcd(n-1, 1) << " " << lcm(n-1,1) << endl;
    //cout << gcd(n-1, 1) + lcm(n-1,1) << endl;
    //
    cout << n-1 << " " << 1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
