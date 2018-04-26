#include <iostream>
#include <stdlib.h> 

int fib(int n) {
  if (n <= 1) return n;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char *argv[]) {
   int n = atoi(argv[1]);
   std::cout << fib(n) << std::endl;
   return 0;
}
