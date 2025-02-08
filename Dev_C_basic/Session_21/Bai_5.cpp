#include<stdio.h>
int main()
{
	FILE *f;
	char str[100];
	int slots;
	printf("Nhap so luong dong: "); scanf("%d", &slots);
	getchar();
	f = fopen("bt05.txt", "w");
	for(int i=0; i<slots; i++)
	{
		printf("Dong thu (%d): ", i);
		fgets(str, sizeof(str), stdin);
		fprintf(f, "%s\n", str);
	}
	fclose(f);
	//doc file tung dong
	printf("Doc cac dong vua nhap: \n");
	char line[100];
	f = fopen("bt05.txt", "r");
	 while (fgets(str, sizeof(str), f) != NULL) {
        printf("%s", str);
    }
	fclose(f);
	return 0;
}
