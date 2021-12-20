#include <iostream>
#include <vector>

using namespace std;

void work()
{
	/**
    + 1) считать число 
    + 2) добавить его к одному из счетчиков соответсвующего класса эквивалетности: 
    делится на 21
    делится на 7 НЕ на 3
    делится на 3 НЕ на 7
    не делится ни на 7 ни на 3
    + 3) ответ n21 * n7 + n21 * n3 + n21 * no + n21*(n21-1) / 2
	*/
	int n(0), cur(0);
	int n21(0), n3(0), n7(0), no(0);
	cin >> n;
	for (int i(0); i<n; i++)
	{
		cin >> cur;
		if (cur % 21 == 0)
			n21++;
		else if (cur % 7 == 0)
			n7++;
		else if (cur % 3 == 0)
			n3++;
	}
	no = n - n21 - n7 - n3;
	cout << n21 * (n21-1)/2 + n21 * n7 + n21 * n3 + n21 * no + n7*n3 << endl;
}

int main(int argc, char** argv)
{
	work();
	return 0;
}
