#include <iostream>
using namespace std;

void fun_c() {
  cout << "starting fun_c()\n";
  throw 0;
  cout << "ending fun_c()\n";
}

void fun_b() {
  cout << "starting fun_b()\n";
  // try {
  fun_c();
  //   }

  //   catch (int &ex) {
  //     cout << "Cought Exception fun_b()\n";
  //   }
  //   cout << "ending fun_b()\n";
}

void fun_a() {
  cout << "starting fun_a()\n";
  fun_b();
  cout << "ending fun_a()\n";
}

int main() {
  cout << "starting main()\n";
  try {
    fun_a();
  }

  catch (int &ex) {
    cout << "Cought Exception in main()\n";
  }

  cout << "Ending main()\n";
  return 0;
}