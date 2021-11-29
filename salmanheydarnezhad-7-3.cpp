
#include<iostream>
using namespace std;
int tabe( int m, int t1, int t2,int n[]) {
	int nesf;
	nesf = (t2 - t1) / 2 + t1;
	if (t1 > t1)
		return -1;
	if (n[nesf] == m)
		return nesf;
	if (n[nesf] > m)
		return tabe(m, t1, nesf -1, n);
	if (n[nesf] < m)
		return tabe(m, nesf +1, t2, n);
}
int main()
{
	int n[10] = { 0,3,4,15,22,31,64,77,85,96 }, m = 22;
	cout << "add dar index = " << tabe(m, 0, 10, n) << endl;
	system("pause");
	return 0;
}
