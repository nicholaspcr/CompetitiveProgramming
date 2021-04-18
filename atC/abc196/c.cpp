#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;

void solve(){	
  ll n;
  cin>>n;
  for(ll i=1;;i++){
    cout<< stoll(to_string(i) + to_string(i)) << endl;
    if(stoll(to_string(i) + to_string(i)) > n){
        cout<<i-1<<endl;
        break;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  solve();
  return 0;
}
