#include <bits/stdc++.h> 
using namespace std;

int main(int argc, char* args[]) {

	int _ = atoi(args[1]);
	mt19937 rnd(_);
	cout << rnd() % 100 + 1 << "\n";

	return 0;
}
