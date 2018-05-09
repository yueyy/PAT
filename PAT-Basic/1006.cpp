#include <iostream>
using namespace std;

void change(int number){
    int b(0),s(0),n(0);
    b = number / 100;
    number = number % 100;
    do
    {
        cout << "B" ;
        b --;
    }while(b > 0);
    s = number / 10;
    do
    {
    	cout << "S";
    	s -- ;
    }while(s > 0);
    number = number % 10;
    for (int i = 1; i <= number; ++i)
    {
    	cout << i ;
    }
}

int main(){
	int number(0);
	cin >> number;
	change(number);
}