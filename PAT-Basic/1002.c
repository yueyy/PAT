#include <stdio.h>
#include <string.h>

int main(){
	char pronunce[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char number[101];
	int result[3];
	gets(number);
	int sum = 0;
	int i,j;
	for (i = 0; i < strlen(number); i++)
	{
		sum += number[i]-'0';
	}
	while(sum > 0)
    {  
        result[j++] = sum % 10;  
        sum = sum / 10;  
    }  
    for(i = j - 1; i > 0; i--){
        printf("%s ",pronunce[result[i]]);  
    }
    printf("%s",pronunce[result[0]]);  
    return 0;  
}
