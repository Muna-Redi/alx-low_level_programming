#include <stdlib.h>
#include <time.h>

/**
* main - Entry point for the C code
*                                                 * Description: This program picks random
*numbers and says if it's positive or negative
*
* Return: it returns an int 0 fo (success)
*/
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        printf("%d: is poitive\n", n);
        else if (n == 0)
        printf("%d: is zero\n", n);                       else
        printf("%d: is negative\n", n);
                return (0);
}
