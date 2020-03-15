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
    double a, b, c;
    cin >> a >> b >> c;

    const double EPS = 1e-9;
    //cout << EPS << endl;
    /*
    if(sqrt(a) + sqrt(b) - sqrt(c) < -EPS)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    */
    double left  = (a*a) + (b*b);
    left += sqrt(a)*sqrt(b)*(4*(a+b));
    if(left < c*c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
