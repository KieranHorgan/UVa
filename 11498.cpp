#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	while(cin >> k) {
		int n, m;
		cin >> n >> m;

		for(int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			if(x==n || y==m) {
				cout << "divisa\n";
				continue;
			}

			if(y>m) cout << "N";
			else cout << "S";
			if(x>n) cout << "E";
			else cout << "O";
			cout << endl;
		}
	}
}