#include <iostream>
#include <set>

using namespace std;

template <typename T> void display(set<T> s) {
  cout << "[";
  for (auto &ele : s) {
    cout << ele << " ";
  }

  cout << "]" << endl << endl;
}

void sets() {
  std::set<int> s{4, 3, 5, 2, 1};
  display(s);
  s = {6, 9, 7, 8, 10};
  display(s);

  s = {3, 3, 2, 3, 1, 2, 1};
  display(s);
}

void set_insert() {
  std::set<int> s{4, 5, 2, 1};
  display(s);
  auto res = s.insert(3);
  if (res.second == true) {
    cout << *res.first << " is succesfully inserted\n";
  }
  display(s);
  res = s.insert(5);
  if (res.second == true) {
    cout << *res.first << " is succesfully inserted\n";
  } else {
    cout << *res.first << " is already present in set\n";
  }

  display(s);
}

void test1() {
  std::set<int> s{4, 5, 3, 2, 1};
  display(s);
  cout << "s.count(5) " << s.count(5) << endl;
  cout << "s.count(6) " << s.count(6) << endl;

  if (s.erase(3)) {
    cout << "3 is erased\n";
  }

  if (!s.erase(6)) {
    cout << "6 is not present in set\n";
  }

  display(s);

  auto it = s.find(4);

  if (it != s.end()) {
    // s.erase(it)
    if (s.erase(*it)) {
      cout << "4 is erased\n";
    }
  }
  display(s);

  if (!s.empty()) {
    cout << "set is not empty\n";
  }

  cout << "clearing set using clear() method\n";
  s.clear();

  if (!s.empty()) {
    cout << "set is not empty\n";
  } else {
    cout << "set is empty\n";
  }
}

int main() {
  // sets();
  // set_insert();
  test1();
  return 0;
}