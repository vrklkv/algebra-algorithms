#include <stdio.h>
#include <stdlib.h>

int main(){ 
    printf("Enter n: ");
    int n,i; 
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the permutation: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    printf("\nInverse permutation: ");
    for(i=0;i<n;i++)
        b[a[i]-1]=i+1;
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
return 0;
}