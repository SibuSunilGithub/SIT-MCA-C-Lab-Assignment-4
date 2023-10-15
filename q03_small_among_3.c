// Find the smallest among three numbers.

# include<stdio.h>
int main(){
    int num1, num2,num3;
    printf("Please Enter Three Numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1<num2 && num1 < num3)
    {
        printf("%d Is Smallest.",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d Is Smallest.",num2);
    }
    else
    {
        printf("%d Is Smallest.",num3);
    }
    return 0;
    }
