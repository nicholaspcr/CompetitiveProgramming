#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int qtdD(int n){
  int op = 1;
  while(n/10 > 0){
    op++;
    n/=10;
  }
  return op;
}

void solve(){
  int n;cin>>n;
  int p = n%10;
  cout << qtdD(n)<<endl;

}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
