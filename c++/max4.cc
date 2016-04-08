#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

/*
 * Add `int max_of_four(int a, int b, int c, int d)` here.
 * */

int max_of_four(int a, int b, int c, int d) {

  int m = 0;
  int numbers[4] = {a, b, c, d};
  int size = sizeof(numbers) / sizeof(*numbers);

  for(int i=0; i < size; i++) {
    if(numbers[i] > m) {
      m = numbers[i];
    }
  }

  return m;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}



