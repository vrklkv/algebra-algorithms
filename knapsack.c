#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
if(a>=b)return a;
else return b;
}

int main(){ 
    int n,K,i,j; 
    scanf("%d %d",&n,&K);

    int c[n][K];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            c[i][j]=0;

    int data[n][2];
    for(i=0;i<n;i++)
        scanf("%d %d",&data[i][0],&data[i][1]);
        
    //int add[n];
    //for(j=0;j<n;j++)
    //    add[j]=0;

    for(j=0;j<K;j++){
        if(data[0][1]<=j+1)c[0][j]=data[0][0];
    }
    for(i=1;i<n;i++){
        for(j=0;j<K;j++){
            if(data[i][1]>j+1)c[i][j]=c[i-1][j];
            if(data[i][1]<=j+1){
                if(j!=0){
                   c[i][j]=max(c[i-1][j],(data[i][0]+c[i-1][j-data[i][1]]));
                }
                if(j==0){
                   c[i][j]=max(c[i-1][j],data[i][0]);
                }
            }
        }
    }

    printf("%d\n\n", c[n-1][K-1]);
    
    //for(i=0;i<n;i++){
    //    for(j=0;j<K;j++){
    //        printf("%d ",c[i][j]);
    //    }
    //    printf("\n");
    //}
    return 0;
}