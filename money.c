#include <cs50.h>
#include <stdio.h>

int TransferDollars(float Dollars) {
    int dollarAll;
    dollarAll = Dollars * 100;
    return(dollarAll);
}

int dSum_25(int AllDollar) {
    int sum_25;
    sum_25 = AllDollar / 25;
    return(sum_25);
}

int dSum_10(int AllDollar, int Dollar_25) {
    int sum_10;
    sum_10 = (AllDollar - (25 * Dollar_25)) / 10;
    return(sum_10);
}
int dSum_5(int AllDollar, int Dollar_25, int Dollar_10) {
    int sum_5;
    sum_5 = (AllDollar - ((25 * Dollar_25) + (10 * Dollar_10))) / 5;
    return(sum_5);
}
int dSum_1(int AllDollar , int Dollar_25 , int Dollar_10 , int Dollar_5) {
    int sum_1;
    sum_1 = (AllDollar - ((25 * Dollar_25) + (10 * Dollar_10) + (5 * Dollar_5))) / 1;
    return(sum_1);
}
int main(void) {
    float Dollars;
    printf("Введите сумму в формате сс.сс: \n");
    scanf("%f", &Dollars);
    int DollarAll , Dollar_25 , Dollar_10 , Dollar_5 , Dollar_1;
    DollarAll = TransferDollars(Dollars);
    Dollar_25 = dSum_25(DollarAll);
    Dollar_10 = dSum_10(DollarAll , Dollar_25);
    Dollar_5 = dSum_5(DollarAll , Dollar_25 , Dollar_10);
    Dollar_1 = dSum_1(DollarAll , Dollar_25 , Dollar_10 , Dollar_5);
    printf("%i монет по 25 пенсов, %i монет по 10 пенсов, %i монет по 5 пенсов, %i монет по 1 пенс\", Dollar_25 , Dollar_10 , Dollar_5 , Dollar_1);
}
