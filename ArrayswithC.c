#include<stdio.h>
int main() {

    int start;
    int x; 
    int num[x];
    printf("Enter the Elements you want to store");
    scanf("%d", & x);



    for (start = 0; start <= x; start++){

        printf("Enter array element");

        scanf("%d", & num[start]);
    }

    for(start = 0; start <= x; start++){
        printf("\n %d", num[start]);
    }


return 0;
}