#include<stdio.h>

int find_factorial(int);
int print_fibonacci(int);
int print_odd_series(int);

int print_odd_series(int num) {
  int start = 1;
  while(start <= num) {
    printf("%d \n",start);
    start += 2;
  }
}

int print_fibonacci(int num) {
  int prev_term = -1;
  int next_term = 1;
  int count = 0;
  while(count != num){
  int curr_term = prev_term + next_term;
  prev_term = next_term;
  next_term = curr_term;
  printf("%d \n",curr_term);
  count++;
  }
  return 0;
}

int find_factorail(int num) {
  if(num == 0) return 1;
  return num * find_factorail( num -1);
}

int main() {
  int num;
  printf("Enter a number to find factorial \n");
  scanf("%d", &num);
  printf("Factorial of %d is %d \n",num, find_factorail(num));
  int count;
  printf("Enter number of terms you want to print of Fibonacci series \n");
  scanf("%d",&count);
  printf("Fibonacci series upto %d terms is : \n",count);
  print_fibonacci(count);
  int limit;
  printf("Enter a number upto which you want to print all odd numbers from 1 \n");
  scanf("%d", &limit);
  printf("Odd series upto %d from 1 is :\n",limit);
  print_odd_series(limit);
  return 0;
}