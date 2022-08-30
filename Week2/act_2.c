#include<stdio.h>


int main (){
  int i , j ,n ;
  printf("Enter your triangle: ");
  scanf("%d", &n);

    for(i=1 ; i <= n ; i+=1){

      for(j=1 ; j <= n ; j+=1){

        if(i<j){

        printf(" ");

        }

        else{

        printf("*");

        }


      }

      printf("\n");

    }

}