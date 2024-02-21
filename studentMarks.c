#include <stdio.h>
int main() {
    int Mark;

    printf("Weka Alama Marks amepata kwa Main exams");
    scanf("%d", &Mark);

    if(Mark >= 0 && Mark <= 39){
        printf("Amenyakuwa: E ");
    }else if (Mark >= 40 && Mark <= 49){
        printf("Amenyakuwa: D");
    }else if (Mark >= 50 && Mark <= 59){
        printf("Amenyakuwa: C");
    }else if (Mark >= 60 && Mark <= 69){
        printf("Amenyakuwa: B");
    }else if(Mark >= 70 && Mark <= 100){
        printf("Amenyakuwa: A");
    }else{
        printf("We have no that entry");
    }
    


return 0;
}