#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

///@todo move display to common header
template <typename T> void display(deque<T> d) {
  cout << "[";
  for (auto &ele : d) {
    cout << ele << " ";
  }

  cout << "]" << endl << endl;
}

void test1() {
  deque<int> d1{66, 1, 2, 3, 4, 5};
  display(d1);
  cout << "d1.at(0)= " << d1.at(0) << endl;
  cout << "d1[0]= " << d1[0] << endl;

  deque<int> d2(5, 100);
  display(d2);
  d2.emplace_back(150);
  d2.emplace_front(50);
  display(d2);

  cout << "d2.size()= " << d2.size() << endl;
  cout << "d1.max_size() = " << d1.max_size() << endl;
}

void test2() {

  deque<int> d{0, 0, 0};
  display(d);

  d.push_back(100);
  d.push_front(10);
  display(d);

  cout << "d.front()= " << d.front() << endl;
  cout << "d.back()= " << d.back() << endl;

  d.pop_back();
  d.pop_front();
  display(d);
}

///@note application of deque, filter odd and even no
void test3() {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  deque<int> d;

  cout << "before filetering" << endl;
  for (const auto &ele : v) {
    cout << ele << " ";
  }
  cout << endl;

  for (const auto &ele : v) {
    if (0 == ele % 2) {
      d.push_back(ele);
    } else {
      { d.push_front(ele); }
    }
  }

  cout << "after filtering" << endl;
  display(d);
  d.clear();

  // front_inserter is same as push_front()
  copy(v.begin(), v.end(), front_inserter(d));

  cout << "using front_inserter() on input [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]      "
       << endl;
  display(d);
  d.clear();

  // back_inserter is same as push_back()
  copy(v.begin(), v.end(), back_inserter(d));
  cout << "using back_inserter() on input [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]      "
       << endl;
  display(d);
}

int main() {
  test1();
  // test2();
  // test3();

  return 0;
}