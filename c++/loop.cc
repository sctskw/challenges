#include<iostream>
#include<cstdio>

using namespace std;

const char* numbers[] = {
  "zero", "one", "two", "three",
  "four", "five", "six", "seven",
  "eight", "nine"
};

int main( int argc, char * const argv[] ) {
  int a;
  int b;

  cin>>a;
  cin>>b;

  for(int i = a; i <= b; i++) {
    if( (i > 0) and (i <  10)) {
      cout<<numbers[i]<<endl;
    }
    else if( (i > 9) and (i%2 == 0) ) {
      cout<<"even"<<endl;
    }
    else {
      cout<<"odd"<<endl;
    }
  }
}
