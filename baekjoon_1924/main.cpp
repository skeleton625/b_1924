#include <iostream>
#include <string>
using namespace std;

// 2009³â ¹öÀü
int m, d, pre_m = 1, pre_d = 1;
int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
string days[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

int main()
{
	cin >> d >> m;
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