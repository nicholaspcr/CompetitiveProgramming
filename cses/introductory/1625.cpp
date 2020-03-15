#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int opX[4] = { 1, 0, -1, 0 };
int opY[4] = { 0, 1, 0, -1 };

int calc(int i, int n, string mov, pi pos){
    if(pos.F >= 7 || pos.S >= 7 || pos.F < 0 || pos.S < 0)
        return 0;
    if(i == 48) return 1;
    cout << pos.F << " " << pos.S << endl;
    int ans = 0;
    if(mov[i] == '?'){
        for(int j = 0; j < 4; j++){
            pi newPos = pos;
            newPos.F = newPos.F + opX[j];
            newPos.S = newPos.S + opY[j];
            ans += calc(i+1, n, mov, newPos);
        }
    }else{
        if(mov[i] == 'R'){
            pos.F++;
            ans = calc(i+1, n, mov, pos);
        }else if(mov[i] == 'D'){
            pos.S--;
            ans = calc(i+1, n, mov, pos);
        }else if(mov[i] == 'L'){
            pos.F--;
            ans = calc(i+1, n, mov, pos);
        }else if(mov[i] == 'U'){
            pos.S++;
            ans = calc(i+1, n, mov, pos);
        }
    }
    return ans;
}

void solve(){
    string s; cin >> s;
    pi pos = MP(0,0);
    cout << calc(0, (int)s.size(), s, pos) << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
