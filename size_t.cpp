#include <stddef.h> // size_t
#include <limits>
#include <iostream>

using namespace std;

int main() {
  cout << std::numeric_limits<size_t>::max() << "\n";
  size_t a = 10;
  int b = (int) b;

  cout<<a<<endl;
  cout<<b<<endl;

  string s = "test";
  cout<<s.find("z")<<endl;
  cout<<string::npos<<endl;

  if(s[0] < 'z'){
      cout<<"one"<<endl;
  }
}