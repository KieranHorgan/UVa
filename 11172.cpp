#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		if(a==b) cout << "=" << endl;
		if(a>b) cout << ">" << endl;
		if(a<b) cout << "<" << endl;
	}
}