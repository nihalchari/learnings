#include <iostream>
#include <map>
#include <set>
using namespace std;

template <typename T1, typename T2> void display(std::map<T1, T2> m) {
  cout << "[";
  for (auto &ele : m) {
    cout << ele.first << ":" << ele.second << " ";
  }

  cout << "]" << endl;
}

void display(std::map<std::string, std::set<int>> m) {
  cout << "[ ";
  for (const auto &ele : m) {
    cout << ele.first << ": [ ";
    for (const auto &val : ele.second) {
      cout << val << " ";
    }
    cout << "] ";
  }
  cout << "]\n";
}

void map_demo() {
  std::map<int, std::string> m1{{3, "three"}, {1, "one"}, {2, "two"}};
  cout << "map m1 contains: ";
  display(m1);
  cout << "m1.size()= " << m1.size() << endl;
  cout << "m1.max_size()= " << m1.max_size() << endl;

  std::map<std::string, std::string> m2{{"sachin", "cricket"},
                                        {"messi", "football"},
                                        {"sania", "tennis"},
                                        {"sindhu", "badminton"}};

  cout << endl;
  cout << "map m2 contains: ";
  display(m2);
  cout << "m2.size()= " << m2.size() << endl;

  std::pair<std::string, std::string> p1{"anand", "chess"};
  cout << "\ninerting new element in m2\n";
  m2.insert(p1);
  cout << "map m2 contains: ";
  display(m2);
  cout << "m2.size()= " << m2.size() << endl;

  cout << "\ninerting new element in m2\n";
  m2.insert(std::make_pair("merry", "boxing"));
  cout << "map m2 contains: ";
  display(m2);
  cout << "m2.size()= " << m2.size() << endl;

  cout << "\ninerting new element in m2\n";
  m2["person"] = "game";
  cout << "map m2 contains: ";
  display(m2);
  cout << "m2.size()= " << m2.size() << endl;

  cout << "\nreplacing value at key person element in m2\n";
  m2["person"] = "newgame";
  cout << "map m2 contains: ";
  display(m2);

  cout << "\nreplacing value at key person element in m2\n";
  m2.at("person") = "anothergame";
  cout << "map m2 contains: ";
  display(m2);

  cout << "\nerasing person from m2\n";
  m2.erase("person");
  cout << "map m2 contains: ";
  display(m2);

  auto it = m2.find("anand");
  if (it != m2.end()) {
    cout << "found: " << it->first << "->" << it->second << " erasing "
         << it->first << endl;

    m2.erase(it);
    cout << "map m2 contains: ";
    display(m2);
  }

  if (m2.count("sachin")) {
    cout << "\ncricket exists\n";
  }

  cout << "removing all elements\n";
  m2.clear();
  cout << "map m2 contains: ";
  display(m2);

  if (m2.empty()) {
    cout << "map is empty\n";
  }
}

void test1() {
  std::map<std::string, std::set<int>> report{
      {"Jolly", {100, 90}}, {"Lx", {95}}, {"Amar", {80, 90, 100}}};

  display(report);
  report["Jolly"].insert(95);
  display(report);

  auto it = report.find("Lx");
  if (it != report.end()) {
    it->second.insert(93);
  }
  display(report);
}

int main() {

  // map_demo();
  test1();

  return 0;
}