// 110999.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 

char fname[20] = "new.txt";
char modew[10] = "w";
char moder[10] = "r";
int x = 5;
int y;
FILE *fp;
int n = 5, m = 3;

int *ptr1 = new int[n];
int *ptr2 = new int[m];
fopen_s(*fp, name1, modew)
for (int i = 0; i < n; i++)
{
	*(ptr + 1) = rand() % 10;



}
char fname1[20] = "new1.txt";
char fname2[20] = "new2.txt";
char fname3[20] = "new3.txt";
int main()
{

	/*do
	{
	scanf_s("%s", fname,20);
	fopen_s(&fp, fname, mode);

	} while ( fp == NULL);
	if (fp == NULL) printf("can not %s in mode %s\n", fname, mode);
	else printf("%s was opened in mode %s\n", fname, mode);
	*/
	fopen_s(&fp, fname, modew);
	fprintf(fp, "%d", x);
	fclose(fp);
	fopen_s(&fp, fname, moder);
	fscanf_s(fp, "%d", &y);
	fprintf(stdout, "from file %d\n", y);

	return 0;
}

