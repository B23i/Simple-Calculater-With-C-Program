#include <stdio.h>
#define FValue 9999999
float sum(){
    float num, sum = 0;
    int total;
    printf("Enter The total of numbers are want to sum:");
    scanf("%d", &total);
    for (int i = 1; i <= total; i++)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Sum:%f", sum);
    return 0;
}
float minus(){
    int total;
    float num[FValue], result;
    printf("Enter The total of numbers are want to Minus:");
    scanf("%d", &total);
    if (total > FValue)
    {
        printf("!!!OUT OF VALUE!!!");
        return 0;
    }
    printf("Enter the first number:");
    scanf("%f", &result);
    for (int i = 2; i <= total; i++)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num[i]);
        result -= num[i];
    }
    printf("Result of Minus process:%f", result);
    return 0;
}
float Multiply(){
    int total;
    float num[FValue], result;
    printf("Enter The total of numbers are want to Multiply:");
    scanf("%d", &total);
    if (total > FValue)
    {
        printf("!!!OUT OF VALUE!!!");
        return 0;
    }
    printf("Enter the first number:");
    scanf("%f", &result);
    for (int i = 2; i <= total; i++)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num[i]);
        result *= num[i];
    }
    printf("Result of Multiply process:%f", result);
    return 0;
}
float Divide(){
    int total;
    float num[FValue], result;
    printf("Enter The total of numbers are want to Divide:");
    scanf("%d", &total);
    if (total > FValue)
    {
        printf("!!!OUT OF VALUE!!!");
        return 0;
    }
    printf("Enter the first number:");
    scanf("%f", &result);
    for (int i = 2; i <= total; i++)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num[i]);
        result /= num[i];
    }
    printf("Result of Divide process:%f", result);
    return 0;
}
float avrg(){
    int total;
    float num[FValue], sum = 0, avrg;
    printf("Enter The total of numbers are want to Divide:");
    scanf("%d", &total);
    if (total > FValue)
    {
        printf("!!!OUT OF VALUE!!!");
        return 0;
    }
    float firstNum;
    printf("Enter the first number:");
    scanf("%f", &firstNum);
    for (int i = 2; i <= total; i++)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avrg = sum/total;
    printf("Result of Avrg Numbers process:%f", avrg);
    return 0;
}
int factorial(){
    int num, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Result of Factorial of Numbers process:%d", fact);
    return 0;
}
int main(void){
    char OT; 
        printf("**MATH CALCULATER**\n!!USE ONLY CAPITAL ORDES!!\n");
        printf("Sum +, Minus -, Multiply *, Divide /, AVRG OF NUMBERS Q, FACTORİAL F:");
        scanf("%c", &OT);
        if (OT == '+')
        {
            sum();
        }
        if (OT == '-')
        {
            minus();
        }  
        if (OT == '*')
        {
            Multiply();
        }
        if (OT == '/')
        {
            Divide();
        }
        if (OT == 'A')
        {
            printf("NOT POSSİBLE AT THE TİME");
            return 0;
        }
        if (OT == 'F')
        {
            factorial();
        }
        /*if (OT == 'P')
        {
            persent();
        }*/
        else
        printf("!!!EROR. INCORRECT ENTRY TRY AGAIN!!!");
    return 0;
}
void kurt(){
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣆⣤\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⡀\n⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⣿⣿⣿⣿⣿⣿⣷⣦⡀\n⠀⠀⠀⠀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣷⣶⣶⣶⣦⣤\n⠀⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⢿⣿⣿⠟⠁\n⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣦⣦⣦⣦⣦⡦\n⠉⠙⠛⠿⣿⣿⣿⣿⣿⣿⣿⠟⠛⠛⠛⠛⠛⠛⠉⠉⠉\n⠀⠀⠀⠀⠈⠙⠻⣿⣿⠟⠁");
}
