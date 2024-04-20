#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
   // 4 transactions with switch case
    int s1, s2;
    char choose;

    printf("First Number: "); scanf("%d", &s1);
    printf("Enter Character [+, -, *, /] :  "); scanf(" %c", &choose);
    printf("Second Number: "); scanf("%d", &s2);

    switch (choose)
    {
    case '+' : printf("Addition Result: %d", (s1+s2)); break;
    case '-' : printf("Subtraction Result: %d", (s1-s2)); break;
    case '*' : printf("Multiplication Result: %d", (s1*s2)); break;
    case '/' : printf("Division result: %d", (s1/s2)); break;
    
    default: printf("You made the wrong choice !"); break;
    }
    return 0;
}