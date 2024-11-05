#include <stdio.h>

int main() {
    int n, i, ne, p, z;
    scanf("%d", &n);
    int a[n];
    for (i=0, p=0, ne=0, z=0; i<n;i++) {
        scanf("%d", &a[i]);
        if (a[i]>0) {
            p++;
        }
        else if (a[i]<0) {
            ne++;
        }
        else {
            z++;
        }
    }
    printf("\nPOSITIVE = %d", p);
    printf("\nNEGATIVE = %d", ne);
    printf("\nZERO = %d", z);
}