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
  string str;
  cin>>str;   
  vi digs(10);

	for(int i=0;i<(int)str.size();i++){
		digs[(int)str[i]-'0']++;
	}
  if(str.size() == 1){
		int a = stoi(str);
		if(a%8 == 0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		return;
  } else if(str.size() == 2){
		int a = stoi(str);
		reverse(all(str));
		int b = stoi(str);
		if(a%8 == 0 || b%8 == 0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		return;
	}else{		
		for(int i=104;i<1000;i+=8){			
			vi t(3);
			t[0] = i%10;
			t[1] = (i/10)%10;
			t[2] = i/100;
			
			for(int j=0;j<3;j++)
				digs[t[j]]--;
			if(digs[t[0]] >= 0 && digs[t[1]] >= 0 && digs[t[2]] >= 0){
				cout<<"Yes\n";
				return;
			}
			for(int j=0;j<3;j++)
				digs[t[j]]++;
		}		
	}
	cout<<"No\n";
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
