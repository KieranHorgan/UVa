#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

ll n, m, k, ans;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	bool isOpen = 1;
	while(getline(cin,s)) {
		for(int i = 0; i < s.size(); i++) {
			char c = s[i];
			if(c=='\"') {
				if(isOpen) {
					cout << "``";
				} else {
					cout << "''";
				}
				isOpen=!isOpen;
			} else {
				cout << c;
			}
		}
		cout << endl;
	}


}