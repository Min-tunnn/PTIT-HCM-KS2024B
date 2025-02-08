#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

struct Student 
{
    char id[20];
    char name[100];
    int age;
    char phoneNumber[15];
};

struct Student students[MAX]={
    {"SV001", "Nguyen Van A", 20, "0123456789"},
    {"SV002", "Tran Thi B", 21, "0987654321"},
    {"SV003", "Le Van C", 22, "0345678901"},
    {"SV004", "Pham Van D", 23, "0765432109"},
    {"SV005", "Hoang Thi E", 19, "0890123456"}
};
int currentLength=MAX;

void displayStudents() 
{
    printf("\nDanh sach sinh vien:\n");
    for (int i=0; i<currentLength; i++) 
	{
        printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void deleteStudentById(char id[]) 
{
    int index=-1;
    for (int i=0; i<currentLength; i++) 
	{
        if (strcmp(students[i].id, id) == 0) 
		{
            index = i;
            break;
        }
    }
    
    if (index==-1) 
	{
        printf("Khong tim thay sinh vien co ID: %s\n", id);
        return;
    }
    
    for (int i=index; i<currentLength-1; i++) 
	{
        students[i]=students[i+1];
    }
    currentLength--;
    printf("Sinh vien co ID %s da duoc xoa!\n", id);
}

int main() 
{
    printf("Danh sach sinh vien ban dau:\n");
    displayStudents();
    char idToDelete[20];
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%s", idToDelete);
    deleteStudentById(idToDelete);
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    displayStudents();
    return 0;
}

