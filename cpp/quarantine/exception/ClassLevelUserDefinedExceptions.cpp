#include <iostream>
using namespace std;

class divideByZeroExp {
public:
  void errmsg() { std::cout << "divide by zero error\n"; }
};

class negativeValueExp {
public:
  void errmsg() { std::cout << "negative value error\n"; }
};

class Myclass {
private:
  int sum;
  int total;

public:
  Myclass(int _sum, int _total) : sum(_sum), total(_total) {
    std::cout << "MyClass Constructor\n";
    if (sum < 0 || total < 0)
      throw negativeValueExp{};
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
    Myclass obj{0, 4};
    auto res = obj.average();
    cout << "res= " << res << endl;
  }

  catch (negativeValueExp &ex) {
    ex.errmsg();
  }

  catch (divideByZeroExp &ex) {
    ex.errmsg();
  }

  cout << "program exit successfully\n";
  return 0;
}