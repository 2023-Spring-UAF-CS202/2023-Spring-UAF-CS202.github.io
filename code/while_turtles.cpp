#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

  int number_of_turtles;

  while (number_of_turtles != 4) {

  	cout << "Please enter a number of turtles: ";
 	cin >> number_of_turtles;

  	if (number_of_turtles < 0) {
		cout << "That's not a valid number of turtles" << endl;
  	} else if (number_of_turtles < 4) {
		cout << "Do you keep them at home?" << endl;
  	} else if (number_of_turtles > 8 or number_of_turtles == 4) {
		cout << "You have " << number_of_turtles << " turtles" << endl;
  	} else {
		cout << "Cool!" << endl;
  	}

  }

  cout << "Do they like pizza?" << endl;

  return 0;
}
