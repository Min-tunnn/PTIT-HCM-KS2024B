#include <stdio.h>
struct student{
	char id[5];
	char name[50];
	int age;
};
int main() {
    FILE *f;
    int slots;
    struct student sv;
    f = fopen("students.txt", "w");
    printf("Nhap so luong sinh vien: "); scanf("%d", &slots);
    getchar();
    for(int i=0; i<slots; i++)
	{
		printf("Sinh vi�n (%d):\n", i + 1);
        printf("M� sinh vi�n: ");
        fgets(sv.id, sizeof(sv.id), stdin);
        printf("T�n sinh vi�n: ");
        fgets(sv.name, sizeof(sv.name), stdin);
        printf("Tu?i sinh vi�n: ");
        scanf("%d", &sv.age);
        getchar();
		fprintf(f, "%s %s %d\n", sv.id, sv.name, sv.age);
	}
	fclose(f);
    return 0;
}

