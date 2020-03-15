#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int checkIsGood(vi v, int vSz){
    map<int,int> m;
    for(int i = 1; i <= vSz; i++){
        if(m[i - v[i-1]]) return (i-1);
        else
            m[i - v[i-1]]++;
    }
    return -1;
}

void solve(){
    int n; cin >> n;
    vi v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    
    int op = checkIsGood(v,n);
    while(op != -1){
        if(op != n-1)
            swap(v[op], v[n-1]);
        else if(op != 0)
            swap(v[op], v[0]);
        else{
            if(op >= n-1)
                swap(v[op], v[op-1]);
            else
                swap(v[op], v[op+1]);
        }
    }
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve()
    return 0;
}
