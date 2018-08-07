#include <iostream>
#include <string>
using namespace std;

int m, d, pre_m = 1, pre_d = 1;
int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main()
{
	cin >> m >> d;
	while (m > pre_m || d >= pre_d + 7) {
		pre_d += 7;
		if (pre_d > month[pre_m-1]) {
			pre_d %= month[pre_m-1];
			pre_m++;
		}
	}
	if(d >= pre_d) cout << days[d - pre_d];
	else cout << days[7 - (pre_d - d)];
	return 0;
}