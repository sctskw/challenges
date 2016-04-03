//Basic Input/Output

#include<iostream>
#include<cstdio>

using namespace std;

int main( int argc, char * const argv[] ) {
  int count = 0;
  int num;

  while(cin>>num) {
    count+=num;
  }

  cout<<count;

  return 0;
}
