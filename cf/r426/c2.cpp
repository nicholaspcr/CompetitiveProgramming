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
    ll a, b;
    cin >> a >> b;
    ll mini = min(a,b);
    ll maxi = max(a,b);
    
    while(sqrt(mini) > 1){
        maxi -= (int)sqrt(mini)*(int)sqrt(mini);
        mini = (int)sqrt(mini);
    }
    if(maxi == mini*mini)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
