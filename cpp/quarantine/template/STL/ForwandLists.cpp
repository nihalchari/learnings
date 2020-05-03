#include <algorithm>
#include <forward_list>
#include <iostream>

using namespace std;

template <typename T> void display(std::forward_list<T> l) {
  cout << "[";
  for (auto &ele : l) {
    cout << ele << " ";
  }

  cout << "]" << endl << endl;
}

void forwardList() {
  std::forward_list<int> l{1, 2, 3, 4, 5};
  display(l);
  // cout << "l.size()= " << l.size();

  cout << "l.max_size()= " << l.max_size() << endl;
  cout << "l.front() = " << l.front() << endl;
  /// l.back() is not available

  cout << "push_front(0) and emplase_front(-1)\n";
  l.push_front(0);
  l.emplace_front(-1);
  display(l);
  cout << "pop_front()\n";
  l.pop_front();
  display(l);
  /// no push_back(), pop_back(), emplace_back() not available
}

void insert_test() {
  std::forward_list<int> l{1, 3, 5, 7, 9};
  display(l);

  auto it = std::find(l.begin(), l.end(), 7);
  l.insert_after(it, 8);
  display(l);
  l.emplace_after(it, 77);
  display(l);
  l.erase_after(it);
  display(l);
}

int main() {
  // forwardList();
  insert_test();
  return 0;
}