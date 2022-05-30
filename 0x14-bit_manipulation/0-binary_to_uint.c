#include < stdio.h >
#include < math.h >

int main()
{
    long num;
    int  dec = 0, rem = 0, place = 0;

    printf("Enter a Binary Number\n");
    scanf("%ld", &num);

    printf("Decimal Equivalent of %ld is ", num);
    while(num)
    {
        rem = num % 10;
        if(rem)
        {
            dec = dec + (pow(2, place) );            
        }
        num = num / 10;
        place++;
    }
    printf("%d\n", dec);

    return 0;
}
