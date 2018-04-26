#!/usr/bin/env node

function fib(n) {
  if (n <= 1) return n;
  return fib(n-1) + fib(n-2);
}

let n = parseInt(process.argv[2])
console.log(fib(n))
