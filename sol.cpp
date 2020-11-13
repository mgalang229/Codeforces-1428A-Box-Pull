#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if(x1==x2||y1==y2)
			cout << abs(x1-x2)+abs(y1-y2);
		else
			cout << abs(x1-x2)+abs(y1-y2)+2;
		cout << "\n";
	}
}
