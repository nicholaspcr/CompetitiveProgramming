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
#define F first
#define S second
#define PB push_back

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

int main(){_

	int n; cin >> n;
	string str; cin >> str;
	//contD = 0, contS = 0;
	map<char, int> chrs;
	map<char, int> ones,twos;	
	
	
	// fills map
	for(auto ch:str){
		chrs[ch]++;
	}
	
	fori(i, 26){
		char ch = (char)('a'+i);
		if(chrs[ch] >= 1){
			if(chrs[ch]/2 > 0)
				twos[ch] = chrs[ch]/2;
			if(chrs[ch]%2)
				ones[ch] = 1;
		}
		ch = (char)('A'+i);
		if(chrs[ch] >= 1){
			if(chrs[ch]/2 > 0)
				twos[ch] = chrs[ch]/2;
			if(chrs[ch]%2)
				ones[ch] = 1;			
		}
	}

	fori(i, 10){
		char ch = (char)('0'+i);
		if(chrs[ch] >= 1){
			if(chrs[ch]/2 > 0)
				twos[ch] = chrs[ch]/2;
			if(chrs[ch]%2)
				ones[ch] = 1;
		}
	}

	
	int szOnes = (int) ones.size();
	int szTwos = 0;
	for(auto it:twos)
		szTwos += it.S;
	//cout<<szOnes<<" "<<szTwos<<endl;
	
	if(szOnes == 0){
		cout<<"1\n";
		string ans = "";
		for(auto it : twos){
			while(it.S--)
				ans += it.F;
		}	
		cout<<ans;
		ans = string(ans.rbegin(),ans.rend()); 
		cout<<ans<<endl;
		
	} else{
		vector<char> elems;
		auto itr = twos.begin();
		while(szTwos > szOnes && szTwos % szOnes != 0){
			if(itr->S == 0) itr++;
			szTwos--;
			itr->S--;
			elems.PB(itr->F);
			elems.PB(itr->F);
			szOnes+=2;
		}
		if( szTwos > 0 && (szTwos % szOnes) == 0){
			cout<<szOnes<<endl;
			int sliceSz = (szTwos / szOnes);			
									
			for(auto it : ones){
					while(it.S--){
						elems.PB(it.F);
					}
			}
			
			for(auto it : elems){
				string ans = "";
				for(int i=0;i<sliceSz;i++){
					if(itr->S == 0) itr++;
					ans += itr->F;
					itr->S--;
				}
				cout<<ans<<it;
				ans = string(ans.rbegin(),ans.rend()); 
				cout<<ans<<" ";
			}
			cout<<endl;
			
		}else{
			cout<<str.size()<<endl;
			for(auto ch: str){
				cout<<ch<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

/*
 * 
 *
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

	}
	* */
