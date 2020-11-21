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

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

void solve(){	
	int n, k;
	cin>>n>>k;
	string a, b;
	cin>>a>>b;
	sort(all(a));
	sort(all(b));
	map<char,int> mA, mB;
	for(int i=0;i<n;i++){
		mA[a[i]]++;
		mB[b[i]]++;
	}
	
	for(char ch='a';ch<'z';ch++){
		if(mB[ch] > mA[ch])
			mA[ch] = -1;
		else{
			if(mA[ch] - mB[ch] >= k){
				int op = (mA[ch]-mB[ch])/k;
				mA[ch] = (mA[ch]-mB[ch])%k + mB[ch];
				mA[ch+1] += k*op;
			}
		}
	}
	
	for(char ch='a';ch<'z';ch++){
		//cout<<ch<<"-> "<<mA[ch]<<" "<<mB[ch]<<endl;
		if(mA[ch] != mB[ch]){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
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
