#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

void solve(){	
  int n; cin>>n;
  vector<ll> a(n);
  ll sum = 0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum += a[i];
  }

  for(int i = n; i >= 1; i--){
    if(sum%i == 0){
      bool flag = true;
      ll currSum = 0;
      for(int j = 0; j < n; j++){
        currSum += a[j];
        if(currSum > (sum/i)){
          flag = false;
          break;
        }else if(currSum == (sum/i))
          currSum = 0;
      }
      if(flag){
        cout<<n-i<<endl;
        return;
      }
    }
  }

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
