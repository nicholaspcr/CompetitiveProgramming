#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int const MOD = 1e9+7;

void solve(){
    map<int,int> m;
    int a, b;
    cin >> a >> b;
    vector<pi> v(b);
    for(int i = 0; i < b; i++){
        cin >> v[i].F >> v[i].S;
    }
    for(int i = 0; i < b; i++){
        if(!m[v[i].F]){
            m[v[i].F] = v[i].S + 1;
        }else{
            if(m[v[i].F] != v[i].S){
                cout << "-1" << endl;
                exit(0);
            }
        }
    }
    int c = 1;
    for(int i = 1 ; i <= a; i++)
        if(!m[i]) c = 0;

    if(c){
        for(int i = 1; i <= a; i++){
            cout << m[i] - 1;
        }
        cout << endl;
    }else{
        cout << "-1" << endl;
    }
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
