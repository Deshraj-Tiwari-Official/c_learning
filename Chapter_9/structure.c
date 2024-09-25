#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int age;
    char languages[5][20]; // 5 languages, each with a max length of 20 characters
};

int main() {
    struct person dash;
    // You can also declare things in one line, like this
    // struct person dash = {"Deshraj", 21, {"C", "Python", "JavaScript"}};
    strcpy(dash.name, "Deshraj");
    dash.age = 21;
    
    strcpy(dash.languages[0], "C");
    strcpy(dash.languages[1], "Python");
    strcpy(dash.languages[2], "JavaScript");

    printf("Name: %s\n", dash.name);
    printf("Age: %d\n", dash.age);
    printf("Languages:\n");
    for (int i = 0; i < 5; i++) {
        if (strlen(dash.languages[i]) > 0) {
            printf("- %s\n", dash.languages[i]);
        }
    }
    
    return 0;
}
