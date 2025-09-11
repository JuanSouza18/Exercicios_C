#include <stdio.h>

int main() {
    int var1, var2;     
    int *pt1, *pt2;    
    int temp;           

    var1 = 10;
    var2 = 20;

    pt1 = &var1;
    pt2 = &var2;

    printf("Antes da troca:\n");
    printf("var1 = %d, var2 = %d\n", var1, var2);
    printf("*pt1 = %d, *pt2 = %d\n\n", *pt1, *pt2);

    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    printf("Depois da troca:\n");
    printf("var1 = %d, var2 = %d\n", var1, var2);
    printf("*pt1 = %d, *pt2 = %d\n", *pt1, *pt2);

    return 0;
}
