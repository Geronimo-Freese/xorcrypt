#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @class Enc_Info
 * @brief Encryption information for the given input.
 *        Should be a singelton so there can't be two instances.
 *
 */
class Enc_Info {
private:
  const string key;

  static Enc_Info *instancePtr;

  static Enc_Info *get_Instance(string key);

  Enc_Info(string arg_key) : key(arg_key) {}

public:
  /**
   * @brief may not be cloneable
   */
  Enc_Info(Enc_Info &clone) = delete;

  /**
   * @brief may not be assingable
   */
  void operator=(const Enc_Info &) = delete;

  /**
   * @brief
   */
  std::string get_key(void);

  static Enc_Info *get_instance(string key) {
    if (instancePtr == nullptr) {
      instancePtr = new Enc_Info(string key);
      return instancePtr;
    } else {
      return instancePtr;
    }
  }
};

string parse_encryption_key(char *arg_key) {
  string key(arg_key);

  return key;
}

int main(int argc, char *argv[]) {


  if (argc < 2) {
    cout << "Please provide an encryption key: ";
    cin >> key;
    return 2;
  }

  cout << argv[1] << endl;
  return 0;

  string line = "";
  while (getline(cin, line)) {
    cout << line << endl;
  }

  return 0;
}
