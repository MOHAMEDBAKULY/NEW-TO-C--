#include <stdio.h>

int main() {
    int Mark;

    printf("Weka Alama Marks amepata kwa Main exams: ");
    scanf("%d", &Mark);

    switch (Mark) {
        case 0 ... 39:
            printf("Amenyakuwa: E\n");
            break;
        case 40 ... 49:
            printf("Amenyakuwa: D\n");
            break;
        case 50 ... 59:
            printf("Amenyakuwa: C\n");
            break;
        case 60 ... 69:
            printf("Amenyakuwa: B\n");
            break;
        case 70 ... 100:
            printf("Amenyakuwa: A\n");
            break;
        default:
            printf("We have no that entry\n");
    }

    return 0;
}
