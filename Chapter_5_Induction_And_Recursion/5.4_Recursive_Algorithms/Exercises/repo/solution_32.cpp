/*
  Discrete Mathematics and Its Applications
  by Dr. Kenneth H. Rosen
  Chapter 5.4 Recursive Algorithms
  Solution 32
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <cstdio>

int sequence(int n) {
    if (n <= 2)
        return n + 1;
    else
        return sequence(n - 1) + sequence(n - 2) + sequence(n - 3);
}

int main() {
    for (int n = 0; n < 10; ++n)
        printf("[%2d] == [%4d]\n", n, sequence(n));
    
    return 0;
}
