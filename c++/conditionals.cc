#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

const char* numbers[] = {
  "zero", "one", "two", "three",
  "four", "five", "six", "seven",
  "eight", "nine"
};

int main( int argc, char * const argv[] ) {
  int num;

  cin>>num;

  if((num >= 0) && (num <= 9)) {
    cout<<numbers[num]<<endl;
  }
  else {
    cout<<"Greater than 9"<<endl;
  }

  return 0;
}
