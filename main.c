#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess, attempt=0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Guess the number:\n");
  do{
    scanf("%d", &guess);
    attempt++;
    if(guess>num){
        printf("Lower the number please.\n");
    }
    else if(guess<num){
        printf("Guess a higher number please.\n");
    }
    else{printf("Congratulations.\n You guessed the number in %d attempts.", attempt);
    }

  }
  while(guess!= num);
  
  return 0;

}