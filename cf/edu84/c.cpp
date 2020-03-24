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
typedef vector<pi> vpi;
typedef long long ll;

struct Coin{
    int x,y;
    int dX, dY;

};

bool comp(Coin l, Coin r){
    int dL = abs(l.dX - l.x) + abs(l.dY - l.y);
    int dR = abs(r.dX - r.x) + abs(r.dY - r.y);
    return dL < dR;
}


void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    Coin coins[k];
    for(int i = 0; i < k; i++){
        cin >> coins[i].x >> coins[i].y;
    }
    for(int i = 0; i < k; i++){
        cin >> coins[i].dX >> coins[i].dY;
    }
    /*
    cout << endl;
    sort(coins, coins + k, comp);
    for(int i = 0; i < k; i++){
        cout << coins[i].x << " " << coins[i].y << endl;
        cout << coins[i].dX << " " << coins[i].dY << endl;
        cout << endl;
    }
    */

    int countOp = 0;
    string ans = "";
    vi vis(k);
    while(1){
        sort(coins, coins + k, comp);
        int i = 0;
        while(vis[i]) i++;
        if(i >= k) break;
        if(countOp > 2*n*m){
            cout << -1 << endl;
            return;
        }
        for(int j = 0; j < 5; j++){
            if(coins[i].x != coins[i].dX){
                int op = (coins[i].x > coins[i].dX) ? -1 : 1;
                if(op == 1) ans += 'D';
                if(op == -1) ans += 'U';
                for(int j = 0; j < k; j++){
                    coins[j].x += op;
                    if(coins[j].x <= 0) coins[j].x = 1;
                    if(coins[j].x > n) coins[j].x = n;
                    if(coins[j].x == coins[j].dX && coins[j].y == coins[j].dY)
                        vis[j] = 1;
                }
                countOp++;
            }else if(coins[i].y != coins[i].dY){
                int op = (coins[i].y > coins[i].dY) ? -1 : 1;
                if(op == 1) ans+= 'R';
                if(op == -1) ans += 'L';
                for(int j = 0; j < k; j++){
                    coins[j].y += op;
                    if(coins[j].y <= 0) coins[j].y = 1;
                    if(coins[j].y > m) coins[j].y = m;
                    if(coins[j].x == coins[j].dX && coins[j].y == coins[j].dY)
                        vis[j] = 1;
                }
                countOp++;
            }
        }
    }
    cout << ans.size() << endl;
    cout << ans << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
