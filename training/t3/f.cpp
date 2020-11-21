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

string process(string s){
		string ans = "";
		string op = "";
		for(int i=0;i<(int)s.size();i++){
			while(i < (int)s.size() && s[i] != 'k'){
					op += 'k';
					i++;
			}
			if( i < (int)s.size() && s[i] == 'h'){
				cout<<"TESTE\n";
				ans += 'h';
				continue;
			}else{
				ans += op;
				if(i >= (int)s.size()) break;
				continue;
			}
			ans += s[i];
		}
		return ans;
}

void solve(){	
  int n;cin>>n;
  vector<string> vs(n);
  for(int i=0;i<n;i++){
		string ent;
		cin>>ent;
		for(int j=0;j<(int)ent.size();j++){
			if(ent[j] == 'u'){
				vs[i] += "oo";
			}else if(ent[j] == 'h'){
				vs[i] += "kh";
			}else{
				vs[i] += ent[j];
			}
		}
	}
	
	sort(all(vs));

	cout<<endl;
	map<string,int> m;
	for(int i = 0;i < n;i++){
		m[vs[i]]++;
	}
	
		
	cout<<m.size()<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  cout<<process("kkkkkkkkkkkkkkkkkkh")<<endl;
  solve();
  return 0;
}
