#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct date {
    int day;
    int month;
    int year;
} date;

int main() {
    date a, b;
    date arr[4];
    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i].day);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].year);
    }
    
    bool flag = true;
    if (a.day != b.day) flag = false;
    if (a.month != b.month) flag = false;    
    if (a.year != b.year) flag = false;

    if(flag == true) printf("Date are same!");
    else printf("Date are not same!");

    return 0;
}