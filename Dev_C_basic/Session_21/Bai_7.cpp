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
		printf("Sinh viên (%d):\n", i + 1);
        printf("Mã sinh viên: ");
        fgets(sv.id, sizeof(sv.id), stdin);
        printf("Tên sinh viên: ");
        fgets(sv.name, sizeof(sv.name), stdin);
        printf("Tu?i sinh viên: ");
        scanf("%d", &sv.age);
        getchar();
		fprintf(f, "%s %s %d\n", sv.id, sv.name, sv.age);
	}
	fclose(f);
    return 0;
}

