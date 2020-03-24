#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


void solve(){
    int m, k;
    cin >> m >> k;
    // 2^(m+1)
    if(k == 0){
        int value = 0;
        for(int i = 0 ; i < (1 << (m+1))/2; i++){
            printf("%d ", value);
            value++;
        }
        for(int i = (1<<(m+1))/2; i < (1<<(m+1)); i++){
            value--;
            printf("%d ", value);
        }
    }else{
        int a = 0, b = 0;
        for(int i = 0; i <= 17; i++){
            // has a bit in that position
            if( (k >> i) & 1){ 
                b += (1 << i);
            }else{
                a += (1 << i);
                b += (1 << i);
            }
        }

        int value = 0;
        for(int i = 0 ; i < (1 << (m+1))/2 - 1; i++){
            printf("%d ", value);
            value++;
            while(value == a || value == b) value++;
        }
        printf("%d %d ", a, b);
        for(int i = (1<<(m+1))/2 + 1; i < (1<<(m+1)); i++){
            value--;
            while(value == a || value == b) value--;
            printf("%d ", value);
        }

    }
    printf("\n");
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    cout << (262085^262143) << endl;
    solve();
    return 0;
}
