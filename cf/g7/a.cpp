#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define INF 0x3f3f3f3f


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n; cin >> n;
    if( n == 1 ){
        cout << -1 << endl;
        return;
    }
    string str = "";
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        str += "2";
        sum += 2;
    }
    if(sum%3 == 0)
        str[n-2] = '4';
    str += '3';

    cout << str << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
