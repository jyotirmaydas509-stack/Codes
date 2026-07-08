#include <stdio.h>
int main() {
    char name[99];
    printf("Input your name:\n");
    scanf("%99s", name);
    int age;
    printf("Input your age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Hello %s, you are an adult.\n", name);
    } else {
        printf("Hello %s, you are a minor and will be eligible after %d years.\n", name, 18 - age);
    }
    return 0;
}
