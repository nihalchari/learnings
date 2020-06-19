#include <iostream>
#include <vector>
using namespace std;

void test1() {
  // declaration of vector container
  vector<int> myvector{1, 2, 3, 4, 5};

  // using begin() to print vector
  for (auto it = myvector.begin(); it != myvector.end(); ++it)
    cout << ' ' << *it;

  auto last = myvector.rend();
  cout << ' ' << *last;
}

void test2() {
  std::vector<int> vec(3);
  cout << vec.size() << endl;
}

int main() {
  //  test1();
  test2();
  return 0;
}