/*
*programer : talha rusman
* roll number : 23k-0065
* date: 21/11/23
*/
#include <stdio.h>
#include <string.h>

int main() {
    typedef struct autocom {
        char sernum[5];
        int Yearmanu;
        char material[50];
        int quanmanu;
    } data;
    data arr[60];
    int n;
    printf("how many serial numbers you want to enter: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("enter the serial number of car %d: ", i + 1);
        scanf("%s", arr[i].sernum);

        printf("enter the year of manufacture of car %d: ", i + 1);
        scanf("%d", &arr[i].Yearmanu);

        printf("enter the material used in car %d: ", i + 1);
        scanf("%s", arr[i].material);

        printf("enter the quantity manufactured of car %d: ", i + 1);
        scanf("%d", &arr[i].quanmanu);
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].sernum, "BB1") > 0 && strcmp(arr[i].sernum, "CC6") < 0) {
            printf("serial number-> %s\n year of manufacture-> %d\n material used in car %s\n quantity manufactured of car is %d\n", arr[i].sernum, arr[i].Yearmanu, arr[i].material, arr[i].quanmanu);
            printf("\n");
        }
    }
    return 0;
}
