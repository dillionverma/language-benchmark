# Simple benchmark of nth Fibonacci number

---

## Usage

1. Clone repository
2. Run `./build` to compile code
3. Run `./bench` to benchmark code
  * Optional: Provide argument to bench like `./bench 34` to test calculation of different number

---

## Results

```
Calculating 38 fibonacci number

c
39088169

real    0m0.322s
user    0m0.313s
sys     0m0.002s

c++
39088169

real    0m0.333s
user    0m0.326s
sys     0m0.003s

rust
39088169

real    0m0.564s
user    0m0.559s
sys     0m0.002s

javascript
39088169

real    0m0.655s
user    0m0.623s
sys     0m0.022s

ruby
39088169

real    0m5.079s
user    0m5.023s
sys     0m0.037s

```

---

## C code

```c
#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
  if (n <= 1) return n;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  printf("%d\n", fib(n));
  return 0;
}
```

## C++ code

```c++
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
```

## Rust code

```rust
use std::env;

fn fib(n: i32) -> i32 {
    if n <= 1 {
        return n;
    }
    return fib(n-1) + fib(n-2);
}


fn main() {
    let n = env::args().nth(1).unwrap().parse::<i32>().unwrap();
    println!("{}", fib(n));
}
```

## Javascript code

```javascript
#!/usr/bin/env node

function fib(n) {
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

let n = parseInt(process.argv[2])
console.log(fib(n))
```

## Ruby code

```ruby
#!/usr/bin/env ruby

def fib(n)
  return n if n <= 1
  fib(n-1) + fib(n-2)
end

n = ARGV[0].to_i
puts fib(n)
```

---

Used for work term report Winter '18
