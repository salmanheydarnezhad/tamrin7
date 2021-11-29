
#include<iostream>
using namespace std;
int f(int n, int m1, int m2) {
	int sum = 1;
	sum = m1 + m2;
	if (n <= 2)
		return sum;
	return f(n - 1, m2, sum);
}
int main()
{
	int n;
	cout << "shomre jomle sery ra vared konid: ";
	cin >> n;
	cout << "jomle " << n << " seri = " << f(n,0,1) << endl;
	system("pause");
    return 0;
}
