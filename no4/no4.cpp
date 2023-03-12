#include<iostream>
using namespace std;

int main()
{
	int h = 0, m = 0, h1 = 0, m1 = 0;

	cin >> h >> m;
	cin >> h1 >> m1;
	int time = (h1 * 60 + m1) - (h * 60 + m);
	if (time <= 120 && time >= 0) {
		cout << time / 30 * 30 << endl;
	}
	else if (time > 120 && time <= 240) {
		cout << (time - 120) / 30 * 40 + 120 << endl;
	}
	else {
		cout << (time - 240) / 30 * 60 + 120 + 160 << endl;
	}
	return 0;
}