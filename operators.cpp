#include <stdio.h>
int main()
{
    int a = 4;
    int b = a++ + ++a + a++;
    printf("%d", b);
    printf("%d", 2 | 5);
    a += 2; //a = a + 2
    a/=2;
    a%=2;
    a |=2;
    printf("%d", 10 < 12);

    //< , > , <= ,>= , == ,!=
}