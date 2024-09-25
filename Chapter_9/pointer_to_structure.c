#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    struct employee Deshraj;
    strcpy(Deshraj.name, "Deshraj");

    struct employee *ptr = &Deshraj;
    // We can add/change the value of a property of a struct using the pointer. The -> operator is used to access the property of the struct the pointer is pointing to.
    ptr->id = 1;
    ptr->salary= 1.5;

    printf("%s\n", ptr->name);
    printf("%d\n", (*ptr).id); // You can also do this to print. BUT DONT DO THAT. IF U R CHAD.
    printf("%f lakh\n", ptr->salary);
    return 0;
}
