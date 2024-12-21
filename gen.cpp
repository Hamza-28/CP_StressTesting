#include <bits/stdc++.h> 
using namespace std;

int main(int argc, char* args[]) {

	int x = atoi(args[1]);
	mt19937 mt(x);
	cout << mt() % 100 + 1 << "\n";

	return 0;
}
