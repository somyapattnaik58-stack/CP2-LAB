#include<stdio.h>
#include<string.h>
int main()
{
	FILE*fp;
	char text[50];
	fp=fopen("file.txt","a");
	if(fp==NULL){
		pf("file not found\n");
		return 1;
	}
	printf("Enter text to append:");
	gets(text);
	printf(fp,"%s",text);
	fclose(fp);
	return 0;
	
}
