// Anita Martin amartin98@cnm.edu
// Movie Ticketing System
// Driver.cpp

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	cout << " Anita Martin \n";
	cout << "\n Movie Ticketing System \n";
	cout << "\n Objective: To calculate the theater's gross and net box office profit for the night. \n";
	cout << "\n";
	cout << "\n";

	// Creating constants and variables for the program
	const double STANDARD_ADULT_PRICE{ 10.50 };
	const double STANDARD_CHILD_PRICE{ 6.25 };
	const double THEATER_PERCENT{ 0.80 };
	
	int numOfAdultTicket;
	int numOfChildTicket;
	double totalAdultPrice;
	double totalChildPrice;
	double totalCostOfTickets;


	// Retrieving user information
	string movieName;
	cout << "What is the name of the movie? ";
	cin >> movieName;

	cout << "Enter number of adult ticket(s): ";
	cin >> numOfAdultTicket;

	cout << "Enter Number of child ticket(s): ";
	cin >> numOfChildTicket;


	// Calculating gross and revenue
	totalAdultPrice = ( numOfAdultTicket * STANDARD_ADULT_PRICE );
	totalChildPrice = ( numOfChildTicket * STANDARD_CHILD_PRICE );
	totalCostOfTickets = ( totalAdultPrice + totalChildPrice );


	// Displaying information to user
	cout << "\n";
	cout << "\n";
	cout << "     Your movie: "; 
		cout << movieName << endl;
	cout << "\n";
	cout << "\n";
	cout << "     Number of Adult tickets sold: "; 
		cout << numOfAdultTicket << endl; 
	cout << "\n";
	cout << "\n";
	cout << "     Number of Child tickets sold: "; 
		cout << numOfChildTicket << endl;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "     Total revenue is:"; 
		cout << setw(5) << right << "$" << totalCostOfTickets << endl;
	cout << "\n";
	cout << "\n";
	cout << "     Box office profit:"; 
		cout << setw(5) << right << "$" << totalCostOfTickets * THEATER_PERCENT << endl;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "Thank you for using our services, have a wonderful day/ evening.";
	cout << "\n";
	cout << "\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);

	

	// Progams ends
	return 0;
}