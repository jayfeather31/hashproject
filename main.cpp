// main.cpp
// Final (GROUP) Project
// Last Updated:	11/28/2018
// Contributors:
// Andey Tuttle		-	Project Leader	(Recursion/Code-Gluer)
// Jeremiah Vaskis	-	Project Member	(Class/Vector Work)
// Spencer Romberg	-	Project Member	(I/O & UI Work)
// Liscensed under Apache 2.0 Liscense

// Main class for Tracking Tree project

#include "UnitTests.h"
using std::cout;
using std::getline;
using std::cin;
using std::string;
using std::endl;
string nextCommand;

void input()
{

}

void print_all()
{

}

void print_specific()
{

}
int main() {

    //test all of project's individual pieces, uncomment testDriver() to run.
    //testDriver();
	std::vector<DataEntry> main_trackingTree;
	DataEntry main_root;
	main_root.setEvent("root event");
	main_root.setParentID("rootParentId");
	main_root.setID(hash(main_root.getParentID() + main_root.getEvent()));
	main_trackingTree.push_back(main_root);
	grow(main_trackingTree);
	int index = 1;
	bool cont = true;
	

	while (cont) {
		//prompt the user for input
		cout << "Type input to add in a data entry. Type print to print out the IDs or a specific ID.\nFor additional information on any of these functions, type help." << endl;
		//get the user input for the command
		getline(cin, nextCommand);
		if (nextCommand == "h" || nextCommand == "Help" || nextCommand == "help")
		{
			cout << "--------------------------------------TUTORIAL-----------------------------------------------" << endl;
			cout << "To add in user input, type in input. Doing so will allow you to add raw input into the vector," << endl; 
			cout << "which will automatically be sorted." << endl << endl;
			cout << "To print out all of the IDs in the tree, type print. After this, you will be asked to print a" << endl; 
			cout << "specific ID or all the IDs." << endl << endl;
			cout << "To quit the program, type quit. After this, the program will ask you if you want to quit." << endl;
			cout << "If you choose to do so, then the program will close, otherwise it will continue." << endl;
			cout << "---------------------------------------------------------------------------------------------" << endl;
		}
		if (nextCommand == "i" || nextCommand == "Input" || nextCommand == "input") {
		//executes code to enter a new input into the vector
			input();
		} else if (nextCommand == "p" || nextCommand == "Print" || nextCommand == "print") {
			bool print_confirm = true;
			string confirm;
			//executes code to print out all of the IDs, or to print out just a specific ID.
			while (print_confirm)
			{
				cout << "Do you wish to print out all of the IDs? (Y/N): ";
				cin >> confirm;
				if (confirm == "y" || confirm == "Y")
				{
					print_all();
					bool print_confirm = false;
				}
				if (confirm == "n" || confirm == "N")
				{
					print_specific();
					bool print_confirm = false;
				}
			}
		}  else if (nextCommand == "q" || nextCommand == "Quit" || nextCommand == "quit") {
			bool print_confirm = true;
			string confirm;
			//executes code to print out all of the IDs, or to print out just a specific ID.
			while (print_confirm)
			{
				cout << "Are you sure you wish to quit? (Y/N): ";
				cin >> confirm;
				if (confirm == "y" || confirm == "Y")
				{
					bool print_confirm = false;
					bool cont = false;
				}
				if (confirm == "n" || confirm == "N")
				{
					bool print_confirm = false;
					cout << endl << endl;
				}
			}
		}
		cout << endl;
		}
	    system("pause");
		return 0;
}


