#include <stdio.h>
#include <unistd.h>
int main(void) {
    int loop = 0;
while(loop < 1) {
  int h, z, p;
  int l = 0;
printf("Введите высоту пирамидки: ");
scanf("%i", &h);

while(h < 0 || h == 0) {
 printf("Введите высоту пирамидки: ");
 scanf("%i", &h);
}
 if(h > 0) {
     printf("Вы выбрали высоту: %i строк\n", h);
     sleep(1);
     printf("Cтрою пирамидку...");
 }
  else {
      printf("Ошибка!\n");
  }
sleep(1);
while(l < h + 1) {
z = 0;
p = 0;
while(p < h - l) {
  printf(" ");
  p++;
}
while(z < l) {
  printf("#");
  sleep(1);
  z++; }
printf("\n");
l++;
}
printf("Пирамидка построена!\n);
}
