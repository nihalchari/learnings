#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

template <typename T> void display(std::list<T> l) {
  cout << "[";
  for (auto &ele : l) {
    cout << ele << " ";
  }

  cout << "]" << endl << endl;
}

void list_demo() {
  cout << "list demo \n";
  std::list<int> l{1, 2, 3, 4, 5};
  display(l);
  cout << "list.siz() = " << l.size() << endl;
  l = {1, 2, 3};
  display(l);
  cout << "list.front = " << l.front() << endl;
  cout << "list.back = " << l.back() << endl;

  cout << "push_front(0) and emplace_back(6)\n";
  l.push_front(0);
  l.emplace_back(6);
  display(l);
  cout << "pop_back and pop_front()\n";
  l.pop_back();
  l.pop_front();
  display(l);
}

void list_insert() {
  cout << "list insert method\n";
  std::list<int> l{1, 3, 7, 9};
  display(l);
  auto it = std::find(l.begin(), l.end(), 7);
  cout << "inserting 5 before 7\n";
  if (7 == *it) {
    l.insert(it, 5);
  }
  display(l);

#if 0
  it = std::find(l.begin(), l.end(), 8);
  cout << "inserting 8 before 10\n";
  // if (10 == *it) {
  // if(it != l.end())
  l.insert(it, 8);
  //}
  display(l);
  cout << "8 will be inserted at end as 10 is not found\n";
#endif

  cout << "creating list l1 using overloaded constructor\n";
  std::list<int> l1(5, 500);
  cout << "l1 = ";
  display(l1);
  cout << endl;

  cout << "inserting list l2 in list l before 7\n";
  l.insert(it, l1.begin(), l1.end());
  display(l);

  std::advance(it, -6);
  cout << "advance(it -6)= " << *it << endl << endl;

  cout << "resize to two elements\n";
  l.resize(2);
  display(l);
  cout << "resize to five elements\n";
  l.resize(5);
  display(l);
}

int main() {

  // list_demo();
  list_insert();
  return 0;
}