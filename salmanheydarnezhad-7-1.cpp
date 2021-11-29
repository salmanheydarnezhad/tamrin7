
#include<iostream>
using namespace std;
int f(int n,int m1,int m2) {
	int sum = 1;
	sum = m1 + m2;
	if (sum > n) {
		cout << endl;
		return 0;
	}
	if (m1 == 0)
		cout << sum << "  ";

	cout << sum <<"  ";
	return f(n, m2, sum);
}
int main()
{
	int n = 1000;
	f(n, 0, 1);
	system("pause");
    return 0;
}

