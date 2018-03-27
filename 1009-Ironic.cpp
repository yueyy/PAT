#include <iostream>
#include <string>
using namespace std;

int main(){
	string s("");
	string str[80];
	for (int i = 0; i < 80; ++i)
	{
		while (getline(cin,s))
			if (str.empty())
			{
				break;
			}
		cin >> str[i];
	}
	for (int i = 80; i > 0; i--)
	{
		cout << str[i] << " ";
	}
}