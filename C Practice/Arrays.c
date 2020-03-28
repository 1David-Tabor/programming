#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Array*/
    int luckyNumbers[10] = {28, 43, 59, 15, 61};
    /*            Index:  0   1   2   3   4 */
    luckyNumbers[1]= 200;/*Get index 1 from list luckyNumbers*/
    printf("%d", luckyNumbers[3]);

    return 0;
}
