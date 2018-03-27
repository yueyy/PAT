#include <iostream>
using namespace std;

int main(){
    int n(0);
    int max(0), min(100);
    string max_name(""), max_number("");
    string min_name(""), min_number("");
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    	string name(""),number("");
        int grade(0);
    	cin >> name >> number >> grade;
    	if (grade > max)
    	{
    		max = grade;
    		max_name = name;
    		max_number = number;
    	}
    	if (grade < min)
    	{
    		min = grade;
    		min_name = name;
    		min_number = number;
    	}
    }
    cout << max_name << " " << max_number << endl;
    cout << min_name << " " << min_number << endl;
}