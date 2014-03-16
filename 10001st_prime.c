#include <stdio.h>
#include <stdbool.h>

int is_prime(num){
  int i;
  int result = false;

  for(i = 2; i <= num - 1; i++){
    if (num % i == 0){
      result = false;
      return result;
    }
  }
  result = true;
  return result;
}

int ten001st_prime(int upper_bound){
  int number;
  int counter = 0;

  for (number = 2; counter < upper_bound; ++number){
    if(is_prime(number)){
      counter += 1;
        if (counter == upper_bound){break;}
    }
  }
  printf("%i\n", number);
  return number;
}

int main(){
  return ten001st_prime(10001);
}
