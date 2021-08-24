#include<bits/stdc++.h>
using namespace std;


int count(int x) {
	int res = 0;
	while (x > 0) {
		x = x / 10;
		res++;
	}
	return res;
}

int main() {
	int x;
	cin >> x;
	cout << count(x) << endl;
	return 0;
}