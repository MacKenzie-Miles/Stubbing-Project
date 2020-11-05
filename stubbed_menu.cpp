
using namespace std;

// Include statements needed for this program.
#include <iostream>
#include <string>

// Method to display menu and process user input.
void cafeMenu();

// Begin main method.
int main()
{
	// Calls method to display menu and process user input.
	cafeMenu();

	return(0);
}


//----------------------------------------------------------------------------
//
//	 This method will not recieve nor return any parameters.
//	 All processing is contained within the function.
//
//----------------------------------------------------------------------------
void cafeMenu()
{
	// Int variable to store user input.
	int menuOption = 0;
	
	// Print menu once before loop.
	cout << endl << " Eagle Cafe Menu ";
	cout << endl << " ------------------- ";
	cout << endl << " 1.  Hot Latte ";
	cout << endl << " 2.  Cafe Au Lait ";
	cout << endl << " 3.  Hot Chocolate ";
	cout << endl << " 4.  Matcha Latte ";
	cout << endl << " 5.  Chai Tea Latte ";
	cout << endl << " 6.  Cold Brew Latte ";
	cout << endl << " 7.  Bagel w/ Cream Cheese ";
	cout << endl << " 8.  Plain Croissant ";
	cout << endl << " 9.  Soup & Sandwich ";
	cout << endl << " 10. Veggie Wrap ";
	cout << endl << " 11. Exit Menu " << endl;
	cout << endl << " Please choose an option: ";

	// Catch user input before entering loop.
	cin >> menuOption;
	
	// While not exit option, continue iterating.
	while (menuOption != 11)
	{
		// Determine which menu uption was chosen by user, if any.
		switch (menuOption)
		{
			case 1:
				cout << " Menu option not implemented. ";
				break;

			case 2:
				cout << " Menu option not implemented. ";
				break;

			case 3:
				cout << " Menu option not implemented. ";
				break;

			case 4:
				cout << " Menu option not implemented. ";
				break;

			case 5:
				cout << " Menu option not implemented. ";
				break;

			case 6:
				cout << " Menu option not implemented. ";
				break;

			case 7:
				cout << " Menu option not implemented. ";
				break;

			case 8:
				cout << " Menu option not implemented. ";
				break;

			case 9:
				cout << " Menu option not implemented. ";
				break;

			case 10:
				cout << " Menu option not implemented. ";
				break;

			// If user entered anything other than the above options,
			// switch statement will default to ERROR message and loop will
			// continue to next iteration.
			default:
				cout << " ERROR: Option is not valid. ";

		}

		// Console formatting.
		cout << endl;

		// Print menu and catch next input to prevent infinite loop.
		cout << endl << " Eagle Cafe Menu ";
		cout << endl << " ------------------- ";
		cout << endl << " 1.  Hot Latte ";
		cout << endl << " 2.  Cafe Au Lait ";
		cout << endl << " 3.  Hot Chocolate ";
		cout << endl << " 4.  Matcha Latte ";
		cout << endl << " 5.  Chai Tea Latte ";
		cout << endl << " 6.  Cold Brew Latte ";
		cout << endl << " 7.  Bagel w/ Cream Cheese ";
		cout << endl << " 8.  Plain Croissant ";
		cout << endl << " 9.  Soup & Sandwich ";
		cout << endl << " 10. Veggie Wrap ";
		cout << endl << " 11. Exit Menu " << endl;
		cout << endl << " Please choose an option: ";

		cin >> menuOption;

	}
	

}