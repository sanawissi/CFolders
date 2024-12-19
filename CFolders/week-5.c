#include <stdio.h>
  /*
void append(int array[], int size,int element);
int main (){


    int myArray[10];
      

    myArray[5]=5;
    for(int i=0; i<10;i++){
       printf("%d\n",myArray[i]);
    }

    int multiArray[3][4];
    for(int i = 0;i<3; i++){
       printf("%d\n,"multiArray[1][0]);

    }
  
 
    int matrix[3][3] = {(1,2,3),
                        (4,5,6),
                        (7,8,9)};

    for (int i=0; i<3 ; i++) {
        for(int j = 0; j<3; j++){
         if 
           printf("%d, ",matrix[i][j]);
         else
           printf
            }
       
        printf("\n");
 } 
  */

  /*
  int example[10] = {};
    for(int i = 0 ; i<10;i++)
      printf("%d")
  int axample [10]= {};
  for(int i = 1 ; i<15;i++){
      append(example,10,i);
      prettyPrint(example,10);
      
  }
      return 0;
}

void append(int array [], int size,int element){
   for(int i = 0;i<size; i++){

      if(array[i]==0){
         array[i]= element;
         break;
      }
   }


}
void prettyPrint (int array[], int size){

   for(int i =0; i<5; i++) {
      printf("%d", array[i]);
      
}
   printf("\n");
}
*/
int isPerfectNumber(int num){
    int sum= 0;

    for(int i=1; i<= num /2; i++){
        if(num % i == 0){
         sum += i;
        }

    }

}

return(sum == num);

void printPerfectNumbers(int start, int end) {
     for(int i=0; i<end;i++){
        if(i*i > start && i*i <= end){
           printf("%d\n",i*i);
         

        }
     }
   perfectSquares(5,18);
   return 0;
}
