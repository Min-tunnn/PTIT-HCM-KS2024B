#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Ð?nh nghia c?u trúc sinh viên
struct Student 
{
    char id[20];
    char name[100];
    int age;
    char phoneNumber[15];
};

struct Student students[MAX];
int currentLength=0;

void displayStudents() 
{
    if (currentLength==0) 
	{
        printf("Danh sach sinh vien rong!\n");
        return;
    }
    printf("\nDanh sach sinh vien:\n");
    for (int i=0; i<currentLength; i++) 
	{
        printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void addStudent() 
{
    if (currentLength>=MAX) 
	{
        printf("Danh sach da day!\n");
        return;
    }
    struct Student newStudent;
    printf("Nhap ID: ");
    scanf("%s", newStudent.id);
    printf("Nhap ten: ");
    scanf(" %[^"]s", newStudent.name);
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai: ");
    scanf("%s", newStudent.phoneNumber);
    students[currentLength++] = newStudent;
    printf("Them sinh vien thanh cong!\n");
}

void editStudent() 
{
    char id[20];
    printf("Nhap ID sinh vien can sua: ");
    scanf("%s", id);
    for (int i=0; i<currentLength; i++) 
	{
        if (strcmp(students[i].id, id)==0) 
		{
            printf("Nhap ten moi: ");
            scanf(" %[^"]s", students[i].name);
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Nhap so dien thoai moi: ");
            scanf("%s", students[i].phoneNumber);
            printf("Cap nhat thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

void deleteStudentById() 
{
    char id[20];
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%s", id);
    int index=-1;
    for (int i=0; i<currentLength; i++) 
	{
        if (strcmp(students[i].id, id)==0) 
		{
            index=i;
            break;
        }
    }
    if (index==-1) 
	{
        printf("Khong tim thay sinh vien!\n");
        return;
    }
    for (int i=index; i<currentLength - 1; i++) 
	{
        students[i]=students[i+1];
    }
    currentLength--;
    printf("Xoa thanh cong!\n");
}

void searchStudent() 
{
    char name[100];
    printf("Nhap ten sinh vien can tim: ");
    scanf(" %[^"]s", name);
    int found=0;
    for (int i=0; i<currentLength; i++) 
	{
        if (strstr(students[i].name, name)) 
		{
            printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            found=1;
        }
    }
    if (!found) 
	{
        printf("Khong tim thay sinh vien!\n");
    }
}

void sortStudents() 
{
    for (int i=0; i<currentLength-1; i++)
	 {
        for (int j=i+1; j<currentLength; j++) 
		{
            if (strcmp(students[i].name, students[j].name)>0) 
			{
                struct Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    printf("Sap xep thanh cong!\n");
}

int main() 
{
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Tim kiem sinh vien\n");
        printf("6. Sap xep danh sach sinh vien\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) 
		{
            case 1:
                displayStudents();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudentById();
                break;
            case 5:
                searchStudent();
                break;
            case 6:
                sortStudents();
                break;
            case 7:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice!=7);
    return 0;
}
