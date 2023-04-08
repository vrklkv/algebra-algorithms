#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
if(a>=b)return a;
else return b;
}

void take(int n, int K,int items[n], int k, int s,int c[n][K+1],int data[n][2],int no){
    if(c[k][s]==0){
        return;
    } 
    if(c[k-1][s]==c[k][s]){
        take(n,K,items,k-1,s,c,data,no);
    }
    else{ 
        items[no]=k+1;
        take(n,K,items,k-1,s-data[k][1],c,data,no+1);
    }
}

int main(){ 
    int n,K,i,j; 
    scanf("%d %d",&n,&K);

    int items[n];
    for(j=0;j<n;j++)
            items[j]=0;

    int c[n][K+1];
    for(i=0;i<n;i++)
        for(j=0;j<=K;j++)
            c[i][j]=0;

    int data[n][2];
    for(i=0;i<n;i++)
        scanf("%d %d",&data[i][0],&data[i][1]);

    for(j=0;j<=K;j++){
        if(data[0][1]<=j)c[0][j]=data[0][0];
    }
    
    for(i=1;i<n;i++){
        for(j=1;j<=K;j++){
            if(data[i][1]<=j){
                if(j!=0){
                   c[i][j]=max(c[i-1][j],(data[i][0]+c[i-1][j-data[i][1]]));
                }
                if(j==0){
                   c[i][j]=max(c[i-1][j],data[i][0]);
                }
            }
            else{c[i][j]=c[i-1][j];}
        }
    }
    
    //for(i=0;i<n;i++){
    //    for(j=0;j<=K;j++){
    //        printf("%d ",c[i][j]);
    //    }
    //    printf("\n");
    //}

    printf("\n%d\n\n", c[n-1][K]);
    
    take(n,K,items,n-1,K,c,data,0);
    int ans[n];
    for(i=0;i<n;i++)ans[i]=0;
    j=0;
    while(items[j]!=0){ans[items[j]-1]=1;j++;}
    for(j=0;j<n;j++)printf("%d ",ans[j]);

    return 0;
}
