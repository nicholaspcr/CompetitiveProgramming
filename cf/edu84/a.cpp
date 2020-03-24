#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;


void solve(){
    int n, k;
    cin >> n >> k;

    if(~n&1 && k&1)
        cout << "NO\n";
    else if(n&1 && ~k&1)
        cout << "NO\n";
    else{
        if(k&1){
            int currOdd = 1;
            while(k > 1 && n > 0){
                n -= currOdd + currOdd+2;
                k -= 2;
                currOdd += 4;
            }
            if(n > 0 && k == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }else{
            int currOdd = 3;
            while(k > 2 && n > 0){
                n-= currOdd + currOdd+2;
                k-=2;
                currOdd += 4;
            }
            if( n > 0 && k == 2)
                cout << "YES\n";
            else
                cout << "NO\n";

        }

    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
