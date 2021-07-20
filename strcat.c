#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10] ="vikky";
	char str2[10] ="vivek";
    strcat(str2,str1);
    printf("str2 = %s\n",str2);
    return 0;
}