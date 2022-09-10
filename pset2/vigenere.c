#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 1000

int CheckRegisterSymbol(char symbol_text) {
int flag;
    if(symbol_text >= 'A' && symbol_text <= 'Z') {
        flag = 1;
    }
    else {
        flag = 0;
    }
return(flag);
    }

char LetterKey(char symbol_key) {
int flag = CheckRegisterSymbol(symbol_key);
if(flag == 1) {
    symbol_key = symbol_key + 32;
}
char key = symbol_key - 'a';
return(key);
}

int IsAlphabet(char symbol) {
int flag;
    if((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
     flag = 0;
    }
    else {
     flag = 1;
    }
return(flag);
}

int CheckKey(char key[]) {
int flag;
int counter = 0;
while (key[counter] != '\0') {
char symbol = key[counter];
    if(IsAlphabet(symbol) == 0) {
    flag = 0;
}
    else {
    flag = 1;
    return(flag);
}
counter++;
}
return(flag);
}

char CodeCaesar(char symbol , char key) {
    if(symbol >= 'a' && symbol <= 'z') {
        symbol = symbol + key;
        if(symbol > 'z') {
            symbol = ((symbol - 'z') + 'a') - 1;
        }
    }
return(symbol);
}

char StringKey(char argv[1] , int counter) {
char symbol = argv[counter];
return(symbol);
}

char ChangingText(char symbol_original_text , char symbol_key_text) {
int flag = IsAlphabet(symbol_original_text);
char changing_symbol;
    if(flag == 0) {
        changing_symbol = symbol_key_text;
}
    else {
        changing_symbol = symbol_original_text;
}
return(changing_symbol);
}

char VigenereText(char symbol_text , char symbol_key) {
int flag = CheckRegisterSymbol(symbol_text);
char key = LetterKey(symbol_key);
    if(flag == 1) {
        symbol_text = symbol_text + 32;
}
char vigenere_char = CodeCaesar(symbol_text , key);
return(vigenere_char);
}

int main(int argc , char* argv[]) {
    if(argc != 2) {
        return 1;
    }
int flag = CheckKey(argv[1]);
    if(flag == 1) {
        return 1;
    }
    
char key[ARRAY_SIZE];
int counter_argv = 0;
while(argv[1][counter_argv] != '\0') {
    key[counter_argv] = StringKey(argv[1] , counter_argv);
    counter_argv++;
}

char text[ARRAY_SIZE];
printf("Text: ");
fgets(text , ARRAY_SIZE , stdin);

int sizekey = strlen(key);
int counter_for_text = 0;
int counter_for_key = 0;
int flag_one;
char changing_string[ARRAY_SIZE];
while(text[counter_for_text] != '\0') {
char symbol_original_text = text[counter_for_text];
    if(counter_for_key == sizekey) {
        counter_for_key = 0;
}
char symbol_key_text = key[counter_for_key];
flag_one = IsAlphabet(symbol_original_text);
    if(flag_one == 0) {
        counter_for_key++;
}
char changing_symbol = ChangingText(symbol_original_text , symbol_key_text);
changing_string[counter_for_text] = changing_symbol;
counter_for_text++;
}

int counter_for_caesartext = 0;
int flag_two;
while(text[counter_for_caesartext] != '\0') {
char symbol_text = text[counter_for_caesartext];
char key_symbol = changing_string[counter_for_caesartext];
flag_two = CheckRegisterSymbol(symbol_text);
char vigenere_char = VigenereText(symbol_text , key_symbol);
    if(flag_two == 1) {
        vigenere_char = vigenere_char - 32;
    }
counter_for_caesartext++;
printf("%c", vigenere_char);
}
}
