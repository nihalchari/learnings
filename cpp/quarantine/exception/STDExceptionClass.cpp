#include <iostream>
using namespace std;

class divideByZeroExp : public std::exception {
public:
  virtual const char *what() const noexcept { return "devide by zero error\n"; }
};

class Myclass {
private:
  int sum;
  int total;

public:
  Myclass(int _sum, int _total) : sum(_sum), total(_total) {
    std::cout << "MyClass Constructor\n";
  }

  ~Myclass() { std::cout << "MyClass Destructor\n"; }

  double average() {
    if (0 == total)
      throw divideByZeroExp{};
    return (static_cast<double>(sum) / total);
  }
};

int main() {
  try {
    Myclass obj{4, 0};
    auto res = obj.average();
    cout << "res= " << res << endl;
  }

  catch (const divideByZeroExp &ex) {
    std::cerr << ex.what() << std::endl;
  }

  cout << "program exit successfully\n";
  return 0;
}