#include <stdio.h>
int main(int argc, char const *argv[])
{
    int myNum = 15;

    int myOtherNum = 23;

    // Assign the value of myOtherNum (23) to myNum
    myNum = myOtherNum;

    // Assign the value of myNum to myOtherNum
    int myOtherNum2;
    myOtherNum2 = myNum;

    // myNum is now 23, instead of 15
    printf("%d", myNum);
    printf("%d", myOtherNum2); 

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);
    return 0;
}
