#include <stdio.h>
int main()
{
    int a=2;
    int b=4;
    int x;
    int c=7;
    int d=6;
    //The value of a is assign to b//
    x=a=b;
    printf("%d\n",x);

    //First addition and then assignment//
    c+=d;
    printf("%d\n",c);

    //First subtraction and then assignment//
    c-=d;
    printf("%d\n",c);

    //First multiplication and then assignment//
    c*=d;
    printf("%d\n",c);

    //First division and then assignment//
    c/=d;
    printf("%d\n",c);

    //First modulus and then assignment//
    c%=d;
    printf("%d\n",c);

    //First Bitwise AND and then assignment//
    c&=d;
    printf("%d\n",c);

    //First Bitwise OR and then assignment//
    c|=d;
    printf("%d\n",c);

    //First Bitwise XOR and then assignment//
    c^=d;
    printf("%d\n",c);





    return 0;
}


