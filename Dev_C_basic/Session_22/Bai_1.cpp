#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


typedef struct 
{
    int id;
    char name[50];
    int age;
} Student;

Student students[MAX];
int studentCount = 0;

void loadFromFile() 
{
    FILE *file = fopen("students.dat", "rb");
    if (file) 
	{
        studentCount = fread(students, sizeof(Student), MAX, file);
        fclose(file);
    }
}

void saveToFile() 
{
    FILE *file = fopen("students.dat", "wb");
    if (file) 
	{
        fwrite(students, sizeof(Student), studentCount, file);
        fclose(file);
    }
}

void printStudents() 
{
    printf("\nDanh sach sinh vien:\n");
    for (int i=0; i<studentCount; i++) 
	{
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

void addStudent() 
{
    if (studentCount>=MAX) 
	{
        printf("Danh sach da day!\n");
        return;
    }
    
    Student s;
    printf("Nhap ID: "); scanf("%d", &s.id);
    printf("Nhap ten: "); scanf("%s", s.name);
    printf("Nhap tuoi: "); scanf("%d", &s.age);
    
    students[studentCount++] = s;
    saveToFile();
    printf("Them sinh vien thanh cong!\n");
}

void editStudent() 
{
    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);
    
    for (int i=0; i<studentCount; i++) 
	{
        if (students[i].id==id) 
		{
            printf("Nhap ten moi: "); scanf("%s", students[i].name);
            printf("Nhap tuoi moi: "); scanf("%d", &students[i].age);
            saveToFile();
            printf("Sua thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

void deleteStudent() 
{
    int id;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &id);
    
    for (int i=0; i<studentCount; i++) 
	{
        if (students[i].id==id) 
		{
            for (int j=i; j<studentCount-1; j++) 
			{
                students[j]=students[j+1];
            }
            studentCount--;
            saveToFile();
            printf("Xoa thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

void searchStudent() 
{
    int id;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &id);
    
    for (int i=0; i<studentCount; i++) 
	{
        if (students[i].id==id) 
		{
            printf("Tim thay: ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

void sortStudents() 
{
    for (int i=0; i<studentCount-1; i++) 
	{
        for (int j=i+1; j<studentCount; j++) 
		{
            if (students[i].id>students[j].id) 
			{
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    saveToFile();
    printf("Sap xep thanh cong!\n");
}

int main() {
    loadFromFile();
    int choice;
    
    do {
        printf("MENU\n");
        printf("1. In danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Tim kiem sinh vien\n");
        printf("6. Sap xep danh sach sinh vien\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: printStudents(); break;
            case 2: addStudent(); break;
            case 3: editStudent(); break;
            case 4: deleteStudent(); break;
            case 5: searchStudent(); break;
            case 6: sortStudents(); break;
            case 7: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice!=7);
    
    return 0;
}

