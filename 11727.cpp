#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	cin >> k;
	for(int i = 1; i <= k; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> x;
		x.push_back(a);
		x.push_back(b);
		x.push_back(c);

		sort(x.begin(), x.end());
		cout << "Case " << i << ": " << x[1] << endl;
	}
}