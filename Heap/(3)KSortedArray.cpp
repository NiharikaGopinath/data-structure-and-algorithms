#include<bits/stdc++.h>
using namespace std;

// Sort a k-sorted array or nearly sorted array
// Element that should be present in sorted array is within the [i-k,i+k] range

priority_queue<int, vector<int>, greater<int>> heap; //min heap

void Solve(int a[], int n, int k) {

	for (int i = 0; i < n; i++) {

		heap.push(a[i]);
		if (heap.size() > k) {
			cout << heap.top() << " ";
			heap.pop();
		}

	}

	while (heap.size() > 0) {
		cout << heap.top() << " ";
		heap.pop();
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	Solve(a, n, k);
}
