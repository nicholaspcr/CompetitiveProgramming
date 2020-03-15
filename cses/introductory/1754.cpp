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
    int opA = a%3;
    int opB = b%3;
    
    int maxi = max(a,b);
    int mini = min(a,b);
    if(maxi > mini*2){
        cout << "NO\n";
        return;
    }

    if(opA == 2*opB || opB == 2*opA)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--) solve();
    //
    //solve();
    return 0;
}
