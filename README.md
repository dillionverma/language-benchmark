# Simple benchmark for nth Fibonacci number

## Usage

1. `git clone https://github.com/dillionverma/language-benchmark.git`
2. Run `./build` to compile code
3. Run `./bench` to benchmark code
  * Optional: Provide argument to bench like `./bench 34` to test calculation of different number

## Results

```
Calculating 38 fibonacci number

c
39088169

real    0m0.317s
user    0m0.312s
sys     0m0.001s

c++
39088169

real    0m0.321s
user    0m0.316s
sys     0m0.002s

java
39088169

real    0m0.329s
user    0m0.280s
sys     0m0.037s

rust
39088169

real    0m0.553s
user    0m0.547s
sys     0m0.002s

javascript
39088169

real    0m0.631s
user    0m0.605s
sys     0m0.020s

ruby
39088169

real    0m4.874s
user    0m4.833s
sys     0m0.029s

python
39088169

real    0m15.404s
user    0m15.314s
sys     0m0.046s
```

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

## Java code

```java
class fib {
  static int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
  }
    
  public static void main (String args[]) {
    int n = Integer.parseInt(args[0]);
    System.out.println(fib(n));
  }
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
  return fib(n-1) + fib(n-2);
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

## Python code

```python
#!/usr/bin/python
import sys

def fib(n):
    if n <= 1: return n
    return fib(n-1) + fib(n-2)

n = int(sys.argv[1])
print fib(n)
```

Used for work term report winter '18
