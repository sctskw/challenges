#include<iostream>
#include<string>

using std::string;
const string text = "Hello World";


class Voice {
  string suffix;


  public:

    Voice() {
      suffix = "!!!!";
    }

    static void hooray() {
      std::cout << "Hooray!" << std::endl;
    }

    void shout (string phrase) {
      this->say(phrase + this->suffix);
    }


  private:
    void say (string phrase) {
      std::cout << phrase << std::endl;
    }
};

int main( int argc, char * const argv[] ) {
  Voice v;

  v.shout(text);
  v.hooray();

  Voice::hooray();

  return 0;
}
