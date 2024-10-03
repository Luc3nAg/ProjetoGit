#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
   
    while (card_name[0] != 'X')
    {
        printf("nome da carta: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'Q':
        case 'K':
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
            if (val > 10){
                printf("valor invalido\n");
                continue;
            }
        }
        printf("valor da carta: %d\n", val);

        if ((val > 2) && (val < 7)){
            count++;
            printf("A Conta aumentou: %d\n", count);
        }
        else if (val == 10){
            count--;
            printf("a conta diminuiu: %d\n", count);
        }
    }
    
    
    return 0;
}
