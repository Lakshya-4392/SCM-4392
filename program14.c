#include<stdio.h>
int main(){
    int rows=6;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("%-4d",i*j);
        }
        printf("\n");
    }
    return 0;
}