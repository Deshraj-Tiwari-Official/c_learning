#include <stdio.h>
#include <string.h>

struct employee {
  char name[20];
  int id;
  float salary;
};

struct student {
  char name[20];
  int class;
  float percentage;
};

int main() {
  struct employee e[3];

  strcpy(e[0].name, "Deshraj");
  e[0].id = 1;
  e[0].salary = 10000.0;

  strcpy(e[1].name, "Raj");
  e[1].id = 2;
  e[1].salary = 10050.0;

  strcpy(e[2].name, "Dash");
  e[2].id = 3;
  e[2].salary = 10100.0;

  for (int i = 0; i < 3; i++) {
    printf("Name: %s\n", e[i].name);
    printf("ID: %d\n", e[i].id);
    printf("Salary: %.2f\n", e[i].salary);
    printf("\n");
  }

  // Getting data from user to put in struct student
  struct student s;
  for (int i = 1; i <= 3; i++) {
    printf("Enter name of student %d: ", i);
    scanf("%s", s.name);
    printf("Enter class of student %d: ", i);
    scanf("%d", &s.class);
    printf("Enter percentage of student %d: ", i);
    scanf("%f", &s.percentage);
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    printf("Name: %s\n", s.name);
    printf("Class: %d\n", s.class);
    printf("Percentage: %.2f\n", s.percentage);
    printf("\n");
  }

  return 0;
}
