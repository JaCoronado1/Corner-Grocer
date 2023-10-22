// Making sure to include all needed dependencies

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

// Creating Classes one public and one private

class GroceryItems {
public:
	int selection = 0;
	int wordFreq = 0;
	string currWord;
	string userWord;


	
};

class GroceryItem {
private:
	ifstream inFS;
	std::string mystring;
	int freq = 0;
	map<string, int> itemCount;
};


int main() {
	ifstream inFS;
	std::string mystring;
	int freq = 0;
	map<string, int> itemCount;
	string item;
	int selection = 0;
	int wordFreq = 0;
	string currWord;
	string userWord;

	// This is is used to open the needed file


	inFS.open("Project3.txt");
	if (!inFS.is_open())
		cout << "unable to open file" << endl;





// created opening screen to show user the name of the application









	cout << "--------------THE---------------------------------------" << endl;

	cout << "-------------------CORNER-------------------------------" << endl;

	cout << "----------------------GROCER----------------------------" << endl;

	cout << "----------***Meeting all your grocery needs!***---------" << endl;

	// creating a system pause for user to continue
	
	system("pause");


	// Creating the menu to allow user to select desired function

	cout << "-----------Welcome To The Main Menu Please Make a Selection-----------------" << endl;
	cout << "****************************************************************************" << endl;


	cout << "----------1.Display a frequency for a specific item ------------------------" << endl;
	cout << "****************************************************************************" << endl;


	cout << "----------2.Display a list of all items and their frequencies---------------" << endl;
	cout << "****************************************************************************" << endl;


	cout << "----------3.Display Histogram of all items----------------------------------" << endl;
	cout << "****************************************************************************" << endl;


	cout << "---------********* 4.Exit Application***********----------------------------" << endl;
	cout << "****************************************************************************" << endl;


	cout << "------------------------Please make a selection:----------------------------" << endl;


	// This section will accept user input and all catch if a user enters and invalid numerical choice


	cin >> selection;
	cout << "Selection:" << selection << endl;
	if (selection <= 0)
		cout << "*Alert*:Please make a valid selection" << endl;


// This section will allow user to exit application


	if (selection == 4) {

		cout << "Thanks for visiting Corner Grocer" << endl;
		return 0;


	}



// This will allow the user to enter the name of the item and return just a numerical value



	cout << "item name :" << endl;
	cin >> userWord;


	if (selection == 1) {
		while (!inFS.eof()) {
			inFS >> currWord;
			if (!inFS.fail()) {
				if (currWord == userWord) {
					++wordFreq;
				}
			}
		}
	}

		

// Display results to user
		
		cout << item << "item Count:"
			<< wordFreq << "x" << endl;








// This is the second selection in the menu which will display item name and count
		


		while (selection == 2) {
			while (!inFS.eof()) {
				inFS >> currWord;
				if (!inFS.fail()) {
					if (currWord == userWord) {
						++wordFreq;
					}
				}
			}
// Display results to user
			
			cout << userWord <<" " << wordFreq << endl;


			
		}
		

// This section will display information in a histogram format

		while (selection == 3) {
			while (!inFS.eof()) {
				inFS >> currWord;
				if (!inFS.fail()) {
					if (currWord == userWord) {
						++wordFreq;
					}
				}
			}

// display results to user
			cout << userWord  << ++wordFreq<< "*" << endl;


			
		}



		{


			// Create and open a text file this will output search information into file
			ofstream MyFile("Frequency.dat");
			MyFile << userWord << wordFreq;

			





			

				return 1;
			}

		

	}



	





