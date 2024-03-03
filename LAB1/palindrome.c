#include<stdio.h>
#include<math.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    if(num1 < 10){
        printf("SINGLE\n");
        return 0;
    }

    int num2 = num1;
    int new_num = 0;
    int add = 0;
    int mul = 1;

    while(num1!=0)
    {
        new_num = new_num*10 + num1%10;
        add += num1%10;
        mul *= num1%10;
        num1/=10;
    }


    if(new_num == num2){
        printf("%d", add);
    }
    else{
        printf("%d", mul);
    }
}