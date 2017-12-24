/*
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    char card_name[3];
    while (card_name[0] != 'X')
    {
        puts("Enter the card_name AKQJ or digit: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            continue;

        default:
            val = atoi(card_name);
            if ((val < 1) || (val > 9))
            {
                printf("invalid card input...%i/n", val);
                continue;
            }
            break;
        }

        /* Check if the value is 3 to 6 */

        if (val >= 3 && val <= 6)
        {
            count++;
            puts("Count has gone up...");
        }
        /* Otherwise check if it was a 10, J, Q, or K */
        else if (val == 10)
        {
            count--;
            puts("Count has gone down...");
        }

        printf("The current count is: %i\n", count);
    }
}
// new comment
// another comment

