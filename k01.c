#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
//    if(argc == 3){
  int num1, num2;
  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);
  if(num1!=0 || num2!=0){
      printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1])+atoi(argv[2]));
    }else{
      printf("NG\n");
    }
    return 0;
}
