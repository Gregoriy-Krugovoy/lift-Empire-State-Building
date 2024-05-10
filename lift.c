// задача лифт Empire State Building
#include <stdio.h>

int main (void) 
{
    unsigned int floor; // этаж
    unsigned int secretFloors; // секретные этажи

    printf("Enter floor number : "); // приглашение 
    scanf("%u", &floor); // сохраняем результат 
    if(floor > 23 && floor < 40) { // секрктные этажи
        printf("Enter password : ");
        scanf("%u", &secretFloors);
        if(secretFloors == 1337) {
            printf("OK\n");
        } else {
            printf("Incorrect password\n");
        }
    } else if(floor > 0 && floor < 103) { // все этажи кроме секрктных
        printf("OK\n");
    } else {
        printf("Incorrect floor\n");
    }
    return 0;
}
