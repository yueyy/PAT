#include <iostream>
#include <string>
using namespace std;

void check(string word){
    int p = 0;
    int t = 0;
    int left = 0;
    int middle = 0;
    int right = 0;
    bool valid = true;
    for (int i = 0; i < word.length(); i++){
    	if (word[i] != 'P' && word[i] != 'A' && word[i] != 'T')
    	{
    		valid = false;
    	}
    	if (word[i] == 'P')
    	{
    		p += 1;
    	}else if (word[i] == 'T')
    	{
    		t += 1;
    	}else if (word[i] == 'A'){
    	    if ( p == 0 && t == 0)
    	    {
    	    	left += 1;
    	    }else if ( p == 1 && t == 0)
    	    {
    	    	middle += 1;
    	    }else if ( p == 1 && t == 1){
    	    	right += 1;
    	    }
    	}
    }
    if (left*middle != right || word.find("A")==string::npos)
    {
    	valid = false;
    }
    if ( p == 1 && t == 1 && valid==true )
    {
    	cout << "YES" << endl;
    }else{
    	cout << "NO" << endl;
    }
}
int main(){
    int count;
    cin >> count;
    string s[count];
    for (int i = 0; i < count; ++i)
    {
    	cin >> s[i];
    }
    for (int i = 0; i < count; ++i)
    {
    	check(s[i]);
    }   
}
