#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student students[MAX];
    int count = 0;
    FILE *file=fopen("students.txt", "r");
    if (file==NULL) 
    {
        printf("Mo file student.txt that bai !!!\n");
        return 1;
    }

    while (fscanf(file, "%d %49s %d", &students[count].id, students[count].name, &students[count].age)==3) 
    {
        count++;
        if (count>=MAX) 
        {
            break;
        }
    }

    fclose(file);

    printf("Danh sach sinh vien:\n");
    for (int i=0; i<count; i++) 
    {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
    return 0;
}

