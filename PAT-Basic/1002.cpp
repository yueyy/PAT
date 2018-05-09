#include <iostream>
using namespace std;

int main(){
	int num = 0;
	string pronunce[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	cin >> num;
	int sum,copy = 0;
	int end = 0;
	while(num>0){
		end = num % 10;
		sum = sum + end;
		num = num / 10;
	}
	copy = sum;
	cout << sum << endl;
	int count = 0;
	if (copy>=10)
	{
		count += 1;
		copy = copy / 10 ;
	}
	count = count + 1;
	string write[count];
	for (int i = count ; i > 0; i--)
	{
		end = sum % 10;
		write[i] = pronunce[end];
		sum = sum / 10;
	}
	for (int i = 0; i <= count; i++)
	{
		if (i==0 || i == count)
		{
			cout << write[i] ;
		}else {
			cout << write[i] << " ";
		}
	}
}