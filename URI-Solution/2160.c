#include<stdio.h>
#include<string.h>
int main()
{
	char ch[500];
	 scanf("%[^\n\r]", ch);
	if(strlen(ch) < 81){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
