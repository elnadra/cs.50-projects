#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 1000

int ShortKey(int key) {
    while(key > 26) {
key = key - 26; }
return(key); }

int CheckFlag (int flag , char symbol) {
    if (symbol >= 'A' && symbol <= 'Z') {
        flag = 1;
    }
    else {
        flag = 0;
    }
return(flag);
}

char NumberSymbol(char symbol , int key) {
    if(symbol >= 'a' && symbol <= 'z') {
        symbol = symbol + key;
    if(symbol > 'z') {
        symbol = ((symbol - 'z') + 'a') - 1;
    }
    }
    else {
    }
return(symbol);
}

int main(int argc , char* argv[]) {
    if(argc != 2) {
        return 1;
    }
    
int key = atoi(argv[1]);

    if(key < 0) {
        return 1;
    } 
key = ShortKey(key);
char line[ARRAY_SIZE];
int number = 0;
printf("Text: ");
fgets(line , ARRAY_SIZE , stdin);

while(line[number] != '\0') {
char symbol = line[number];
int flag = 0;
flag = CheckFlag(flag , symbol);
if(flag == 1) {
    symbol = symbol + 32;
}
char NumbChar = NumberSymbol(symbol , key);
if(flag == 1) {
    NumbChar = NumbChar - 32;
}
printf("%c", NumbChar);
number++;
}
}
