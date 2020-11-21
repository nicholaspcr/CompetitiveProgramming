#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define mp make_pair
#define pb push_back
#define fori(i, n) for(int i = 0; i < n; i++)
#define For(i, a, b) for(i = a; i < b; i++)
#define roF(i, a, b) for(i = a; i > b; i--)
#define trace(x) cerr << #x << ": " << x << endl
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

int main(){_

	int n, contD = 0, contS = 0;
	string s;
	char l;
	map<char, int> dupl, sing;
	set<char> duplLetter, singLetter;

	cin >> n;
	cin >> s;

	fori(i, n){
		sing[s[i]]++;
	}

	fori(i, 26){
		l = (char)('a'+i);
		if(sing[l] >= 1){
			dupl[l] = sing[l]/2;
			contD += dupl[l];
			sing[l] = sing[l]%2;
			duplLetter.insert(l);
			if(sing[l] & 1){
				contS++;
				singLetter.insert(l);
			}
		}
		l = (char)('A'+i);
		if(sing[l] >= 1){
			dupl[l] = sing[l]/2;
			contD += dupl[l];
			sing[l] = sing[l]%2;
			duplLetter.insert(l);
			if(sing[l] & 1){
				contS++;
				singLetter.insert(l);
			}
		}
	}

	fori(i, 10){
		l = (char)('0'+i);
		if(sing[l] >= 1){
			dupl[l] = sing[l]/2;
			contD += dupl[l];
			sing[l] = sing[l]%2;
			duplLetter.insert(l);
			if(sing[l] & 1){
				contS++;
				singLetter.insert(l);
			}
		}
	}

	if(contS == 0){
		string ans = "";
		for (auto i : duplLetter){
			ans += i;
		}
		auto len = ans.size(); 
		fori(i, len){
			ans += ans[len-1-i];
		}
		cout << "1" << endl;
		cout << ans << endl;
	}
	else if(contD % contS == 0 && contD > 0){
		cout << contS << endl;
		vector<string> anss(contS);
		int each = contD/contS;
		int w = 0;
		set<char>::iterator it = singLetter.begin();
		for(auto i : duplLetter){
			while(dupl[i] > 0){
				while(anss[w].size() < each && dupl[i] > 0){
					anss[w] += i;
					dupl[i]--;
				}
				if(anss[w].size() == each){
					anss[w] += *it;
					w++; it++;
				}
			}
		}

		fori(i, contS){
			fori(j, each){
				anss[i] += anss[i][each-1-j];
			}
			cout << anss[i] << " ";
		}

		cout << endl;

	} else {
		cout << n << endl;
		fori(i, n)
			cout << s[i] << " ";
		cout << endl;
	}
	
	return 0;
}
