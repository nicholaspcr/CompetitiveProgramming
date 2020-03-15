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
    int a, b;
    cin >> a >> b;
    int ans = -1;
    for(int i = 1; i <= 10000; i++){
        int opA = floor( (double)i * 0.08);
        int opB = floor( (double)i * 0.1);
        if(opA == a && opB == b){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}


int main(){
    //int t; cin >> t;
    //while(t--) solve();
    solve();
    return 0;
}
