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
    int a, b;
    cin >> a >> b;
    while(a != 1 && b != 1){
        if( (a == 1 && b != 1) || (b == 1 && a != 1) ) {
            cout << "NO\n";
            return;
        }
        int c = 0;
        for(int i = (int)sqrt(min(a,b)); i >= 2; i--){
            if( a/(i*i) > 0 && b/i > 0 ){
                a /= (i*i);
                b /= i;
                c = 1;
            }else if( b/(i*i) && a/i > 0){
                b /= (i*i);
                a /= i;
                c = 1;
            }
        }
        if(!c){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
