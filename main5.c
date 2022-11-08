#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE*fp;
	char str[30]; //?
	
	fp = fopen("sample.txt", "w"); //fopen
	
	printf("input a word: ");
	scanf("%s", str);//scanf &필요없음  
	fprintf(fp, "%s\n", str);//fprintf
	
	printf("input a word: ");
	scanf("%s", str);//scanf &필요없음  
	fprintf(fp, "%s\n", str);//fprintf
	
	printf("input a word: ");
	scanf("%s", str);//scanf &필요없음  
	fprintf(fp, "%s\n", str);//fprintf
	
	fclose(fp);//fclose
	
	return 0;
}
