#include <stdio.h>
#include <stdlib.h>

int main(){ 
    printf("Enter n: ");
    int n,i,j; 
    scanf("%d", &n);
    int a[n],visited[n],cycle_len=0,s=0;
    for(i=0;i<n;i++)visited[i]=0;
    printf("\nEnter the permutation: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(visited[i]==0){
            visited[i]=1;
            cycle_len+=1;
            j=a[i]-1;
            while(j!=i){
                visited[j]=1;
                cycle_len+=1;
                j=a[j]-1; 
            }
            printf("\ncycle_len=%d",cycle_len);
            s=(cycle_len%2)+1+s;
            cycle_len=0;
        }
    }
    if(s%2==0)printf("\neven");
    if(s%2==1)printf("\nodd");
return 0;
}