#include <iostream>
using namespace std;

bool isPrime(int number){
	for (int i = 2; i*i <= number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(){
     int number(0),count(0);
     cin >> number;
     for (int i = 3; i <= number-2; i++)
     {
     	if (isPrime(i) && isPrime(i+2))
     	{
     		count ++;
     	}
     }
     cout << count ;
}