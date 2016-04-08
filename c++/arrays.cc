#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {

  int n;
  int i;
  std::vector <int> numbers;

  cin>>n;

  while(scanf("%d", &i) != EOF) {
    numbers.push_back(i);
  }

  for(int x = (n-1); x >= 0; --x) {
    cout<<numbers[x]<<" ";
  }

  return 0;
}
