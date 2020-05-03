#include <iostream>
#include <string>
using namespace std;

double PositiveAverage(int sum, int total) {
  if (0 == total)
    throw 0;

  if (sum < 0 || total < 0)
    throw(std::string("negative value error"));
  return static_cast<double>(sum) / total;
}

int main() {
  int total, sum;
  cout << "enter sum: ";
  cin >> sum;

  cout << "enter total: ";
  cin >> total;

  try {
    auto res = PositiveAverage(sum, total);
    cout << "res= " << res << endl;
  }

  catch (int &ex) {
    cerr << "trying to divide by zero\n";
  }

  ///@brief catch all handler, normally to be defined at end of all catch block.
  /// in this example declared earlier for demo purspoe. uncomment to check it
  /// functionality

  //   catch (...) {
  //     cout << "unknown exception thrown\n";
  //   }

  catch (std::string &ex) {
    cerr << ex << endl;
  }

  cout << "return from main\n";
  return 0;
}