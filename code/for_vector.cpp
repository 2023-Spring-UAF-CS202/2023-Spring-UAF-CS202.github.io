#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

  vector<int> numbers;

  int n;

  string prompt {"Enter a number and then press enter: "};
  
  for (int i=0; i<5; ++i) {
    cout << prompt;
    cin >> n;
    numbers.push_back(n);
  }

  cout << "You entered these numbers:" << endl;
  for (int number : numbers) {
    cout << number << endl;
  }

}
