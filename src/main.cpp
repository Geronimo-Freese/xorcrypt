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
  int i = 0;
  char c;
  char c_crypt;
  do{
    cin.read(&c, sizeof(c));
    c_crypt = (c ^ (key[(i++)%key.length()]));
    cout << c_crypt;
  } while(cin.peek()!= EOF);

  return 0;
}

