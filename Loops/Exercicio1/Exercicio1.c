#include <stdio.h>
#include <stdbool.h>

int main()
{
 int num;
 bool eh_primo = true;

 printf("Digite um numero : ");
 scanf("%d",&num);

 if (num > 1) {
     for (int i =2; i < num ; i++) {
        if(num % i == 0) {
            eh_primo = false;
            break;
        }
     }
 } else {
    eh_primo = false;
 }

 if (eh_primo) {
    printf("E primo!");
 } else {
    printf("Nao e primo!");
 }

 return 0;
}
