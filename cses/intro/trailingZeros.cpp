#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int memo[10];

int qtdDigits(int n){
    int c = 0;
    while(n){
        c++;
        n /= 10;
    }
    return c;
}

void solve(){
    memo[0] = 0;
    for(int i = 1; i < 10; i++){
        memo[i] = 
    }
    int n; cin >> n;
    int ans = (n/(10*qtdDigits(n))) * (qtdDigits(n)-1);
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
