#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 512

char uppers(char sumb) {
if(sumb >= 97 && sumb < 123) {
sumb = sumb - ('a' - 'A');
}
return(sumb);
}
int main(void) {
int sum = 0;
int flag = 1;
char name[ARRAY_SIZE];
printf("Введите имя: ");
fgets(name , ARRAY_SIZE , stdin);

while(name[sum] != '\0') {
if(name[sum] == ' ') {
flag = 1; }
else if(flag == 1) {
printf("%c", uppers(name[sum]));
flag = 0; }
sum++;
}
}
