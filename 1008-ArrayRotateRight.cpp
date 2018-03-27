#include <iostream>
using namespace std;

void change(int m, int n, int number[]){
	if (m == 0)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << number[i] << " ";
		}
	}else {
		for (int i = 0; i < n; i++)
		{
			int length = n - m;
			if (i > length)
			{
				int end = i - length;
				number[end] = number[i];
			}else{
				number[i+m] = number[i];
				cout << number[i+m] << endl;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << number[i] << " ";
	}
}

int main()
{
	int n(0),m(0);
	cin >> n >> m;
	int number[n];
	for (int i = 0; i < n; i++)
	{
		cin >> number[i];
	}
	change(m,n,number);
	return 0;
}