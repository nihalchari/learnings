#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

class MyString {
public:
  MyString() {}
  MyString(const char *ptr) {
    cout << "Constructor called\n";
    size = strlen(ptr) + 1;
    data = new char[size];
    std::memcpy(data, ptr, size);
  }

  ~MyString() {
    cout << "Destructor called\n";
    delete[] data;
  }

  MyString(const MyString &temp) {
    cout << "Copy Constructor called\n";
    size = temp.size;
    data = new char[size];
    std::memcpy(data, temp.data, size);
  }

  MyString &operator=(const MyString &temp) {
    cout << "Copy Assignment operator called\n";
    if (&temp == this) {
      return *this;
    }

    if (size != temp.size) {
      delete[] data;
      data = new char[temp.size];
      std::memcpy(data, temp.data, size);
    }
  }

  MyString(MyString &&temp) {
    cout << "Move Constructor called\n";
    data = temp.data;
    size = temp.size;
    temp.data = nullptr;
    temp.size = 0;
  }

  MyString &operator=(MyString &&temp) {
    cout << "Move Assignment operator called\n";
    if (this != &temp) {
      delete[] data;
      size = 0;

      data = temp.data;
      size = temp.size;

      temp.size = 0;
      temp.data = nullptr;
    }

    return *this;
  }

  MyString operator+(const MyString &temp) {
    MyString str;
    str.size = strlen(this->data) + strlen(temp.data) + 1;
    str.data = new char[str.size];
    strcpy(str.data, this->data);
    strcat(str.data, temp.data);
    return str;
  }

  char *data = nullptr;
  size_t size;
};

MyString fun() {
  MyString obj("fun_obj");
  cout << "obj created inside fun()\n";
  return obj;
}

int main() {

  MyString obj1("Robert");
  cout << " for obj1 = Robert\n";

  MyString obj2("Bosch");
  cout << "for obj2 = Bosch\n\n";

  // ///@todo find which constructor is invoked for creating obj4, move
  // constructor was expected but it dint MyString obj4(obj1 + obj3); cout << "
  // obj4 = obj1+obj3 = " << obj4.data << endl;

  ///@brief std::move() is a cast that produces an rvalue-reference to an
  /// object,

  cout << "creating obj3 from obj1\n";
  MyString obj3(std::move(obj1));
  // MyString obj3(obj1);
  cout << "obj3 = " << obj3.data << endl << endl;

  // ///@todo find which constructor is invoked for creating obj4, move
  // constructor was expected but it dint
  // MyString obj6(fun());

  cout << "Assigning obj3 to obj2\n";
  obj2 = (std::move(obj3));
  // obj2 = obj3;
  cout << "obj2 = " << obj2.data << endl << endl;
  return 0;
}