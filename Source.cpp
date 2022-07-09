/*
 * Calculator.cpp
 *
 *  Date: 7/8/2022
 *  Author: Douglas Menard 
 */

#include <iostream>

using namespace std;

int main()
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'y';                      //character initial value was equal to quit program value, causing loop to not run and program to exit
		while (answer != 'n')				//two char variables had double double quotes around them, making them const and not modifyable
		{
			cout << "Enter expression in the form of: 1 + 1, 1 * 1 ect..." << endl;//made more clear to user what to input
			cin >> op2 >> operation >> op1;
			if (!cin)// fixes the instibility of "cin"
				cin.clear();
											//none of the if statements had braces, multiple lines had << the wrong way.
			if (operation == '+') {
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
			}
			if (operation == '-') {
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
			}
			if (operation == '/') {
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
			}// last if was indented incorrectly without braces, operaters in the if statement and following print statement didn't match.
			if (operation == '*') {
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
			}
			

			cout << "Do you wish to evaluate another expression? y for yes, n for quit." << endl;//added yes and no options for renewing
			cin >> answer;
			if (!cin)// fixes the instibility of "cin"
				cin.clear();
		}
		cout << "Program finished!" << endl;
}
/* Went on tangent looking for why my code kept creating infinite loop when asking an expression. If i put "r" into where you would put the expression an infinite loop would start
* and wouldn't stop until i closed the program. Found out the instibility of "cin" and found some code to fix it. While I think this is pretty outside the scope of our current
* knowledge on C++, I figured since I did the work of finding a fix that I would throw it in there. If you have any further knowledge on why this happens with "cin" I would
* absolutely love to hear it. My email is douglas.menard@snhu.edu. Thank you!
*/
