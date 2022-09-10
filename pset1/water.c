#include <stdio.h>

int min(int a) {
    int bottle;
    bottle = a * 12;
    return(bottle);
}

int main(void) {
    int a;
    printf("Введите число: ");
        scanf("%i", &a);
    
    while(a < 0 || a == 0) {
        printf("Введите число: ");
        scanf("%i", &a);
      
    }
   if(a > 0) {
        printf("Вы израсходовали %i бутылок воды за %i минут!\n", min(a), a);
   }
}
