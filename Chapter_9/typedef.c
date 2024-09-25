#include <stdio.h>

typedef struct employee {
    char name[20];
    int id;
    float salary;
} emp;

int main() {
    // typedef is used to declare your own datatype from an existing one. It is primarily used with structures, unions, enums etc.
    typedef int mera_Integer;
    mera_Integer a = 10;
    int b = 20;

    emp e1 = {"Sunil Tiwari", 1, 100000.0};
    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("Salaray: %f\n", e1.salary);
    return 0;
}
