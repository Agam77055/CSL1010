#include<stdio.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    int single = 1;
    if(num1 < 10){
        int j = 0;
        if(num1 == 1 || num1 == 0){
            printf("%d\n", num1);
            return 0;
        }
        while(single < 10){
            single = single*num1;
            j++;
        }
        printf("%d\n", single);
        return 0;
    }

    int num2 = num1;

    int new_num = 0;
    while(num1!=0)
    {
        new_num = new_num*10 + num1%10;
        num1/=10;
    }
    if(new_num % 2 == 0){
        printf("%d", new_num + num2);
    }
    else{
        printf("%d", new_num - num2);
    }
}