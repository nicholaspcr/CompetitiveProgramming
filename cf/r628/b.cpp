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
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    /*
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    */
    cout << v.size() << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
