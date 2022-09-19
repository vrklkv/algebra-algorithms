#include <stdio.h>
#include <stdlib.h>

int main(){ 
    printf("Enter n: ");
    int n,i; 
    scanf("%d", &n);
    int a[n],b[n],c[n];
    printf("\nEnter the first permutation: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the second permutation: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("\nComposition: ");
    for(i=0;i<n;i++)
        c[i]=a[b[i]-1];
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
return 0;
}