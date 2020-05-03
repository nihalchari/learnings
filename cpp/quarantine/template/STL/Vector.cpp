#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

///@todo move display to common header
template <typename T> void display(vector<T> d) {
  cout << "[";
  for (auto &ele : d) {
    cout << ele << " ";
  }

  cout << "]" << endl << endl;
}

void test1_capacity() {

  cout << "tset1\n";
  vector<int> vec1{11, 21, 31};
  cout << "vec1 = ";
  display(vec1);

  cout << "vec1.size() = " << vec1.size() << endl;
  cout << "vec1.capacity() = " << vec1.capacity() << endl;

  vec1.push_back(32);
  cout << "vec1 = ";
  display(vec1);
  cout << "vec1.capacity()  doubles after single push_back= " << vec1.capacity()
       << endl;
  vec1.shrink_to_fit();
  cout << "vec1.capacity() after shrink_to_fit()= " << vec1.capacity() << endl;
  vec1.reserve(15);
  cout << "vec1.capacity() after reserve to size 15 = " << vec1.capacity()
       << endl;
  vec1 = {10, 20, 30, 40};
}

void test2_swap() {

  cout << "\ntset2\n";

  vector<int> vec1{11, 21, 31};
  cout << "vec1 = ";
  display(vec1);

  vector<int> vec2{22, 32, 42, 52, 62};
  cout << "vec2 = ";
  display(vec2);

  cout << "swapping vec1 and vec2\n";
  vec1.swap(vec2);

  cout << "vec1 = ";
  display(vec1);
  cout << "vec2 = ";
  display(vec2);
}

void test3_insert() {

  cout << "\ntest3\n";
  vector<int> vec1{10, 20, 30, 40, 50};
  vector<int> vec2(3, 100);

  cout << "vec1 = ";
  display(vec1);

  auto it = std::find(vec1.begin(), vec1.end(), 40);
  cout << "inserting 35 before 40\n";
  vec1.insert(it, 35);

  cout << "vec1 = ";
  display(vec1);

  cout << "vec2 = ";
  display(vec2);

  it = std::find(vec1.begin(), vec1.end(), 20);
  cout << "insering vec2 before 20\n";
  vec1.insert(it, vec2.begin(), vec2.end());
  cout << "vec1 = ";
  display(vec1);

  cout << "erasing all 100 from vec2\n";
  vec1.erase(vec1.begin() + 1, vec1.begin() + 4);
  cout << "vec1 = ";
  display(vec1);

  vec2.clear();
  cout << "vec2 = ";
  display(vec2);
}

void test4_copy() {
  vector<int> vec1{10, 20, 30, 40, 50};
  vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  std::copy(vec2.begin(), vec2.end(), std::back_inserter(vec1));

  display(vec1);
  vec1.erase(vec1.begin() + 5, vec1.begin() + 15);

  std::copy_if(vec2.begin(), vec2.end(), std::back_inserter(vec1),
               [](int x) { return x % 2 == 0; });

  display(vec1);
}

void test5_transform() {
  vector<int> vec1{10, 20, 30, 40, 50};
  vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  vector<int> vec3;

  std::transform(vec1.begin(), vec1.end(), vec2.begin(),
                 std::back_inserter(vec3), [](int x, int y) { return x * y; });
  display(vec3);
}

int main() {

  test1_capacity();
  test2_swap();
  test3_insert();
  test4_copy();
  test5_transform();
}