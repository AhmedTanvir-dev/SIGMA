#include<stdio.h>
int main() {
    int rows,cols,totalrows;
    printf("Enter the Number of Rows:",totalrows);
    scanf("%d", &totalrows);
    for (rows=1;rows<=totalrows;rows++){
    for (cols=1;cols<=rows;cols++)
        printf("*");
        printf("\n");

}


    return 0;
}
