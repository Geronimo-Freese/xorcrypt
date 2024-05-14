#include <cstdio>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

std::string key = "";

void print_usage(void) { cout << "Usage: xorcrypt [KEY]" << endl; }

void get_key(int argc, char *argv[]) {
  if (argc < 2) {
    print_usage();
    exit(1);
  } else {
    key = argv[1];
  }
}

int main(int argc, char *argv[]) {
  get_key(argc, argv);
  char c = 0;
  char c_crypt = 0;
  int i = 0;

  while(cin.peek() != EOF){
    cin.get(c);
    c_crypt = (c^key[i]);
    cout << c_crypt;
    i++;
    i %= key.size();
  }

  cout << EOF;

  return 0;
}
