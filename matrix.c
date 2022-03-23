#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

int main(){
  
  int matrix[ROW][COL]={ {1,2,3},{4,5,6},{7,8,9}};
  for(int i=0;i<ROW;i++){
     for(int j=0;j<COL;j++){
       printf("%d ",matrix[i][j]);
     }
    printf("\n");
  }
