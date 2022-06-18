/*****************************************************************************
 *AUTHOR  	 : Patrick Wilson
 *PROJECT #	 : Input & Output - New Salary
 *DATE		 : 10/3/18
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * Project : New Salary with Retropay Calculator 
 *----------------------------------------------------------------------------
 * This program will obtain from the user the user's full name, current annual
 * salary and
 *----------------------------------------------------------------------------
 * INPUT:
 * 	<There is no output for this program - output data is obtained through
 * 	  the constants.>
 *
 * OUTPUT:
 * 	<This program will output a heading>
 *****************************************************************************/

int main()

{

	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Titles of the Lab
	 *************************************************************************/
	const char PROGRAMMER[] = "Patrick Wilson";
	const int  LAB_NUM      = 2;
	const char LAB_NAME[]   = "Input & Output - New Salary";
	const int  NAME_SIZE 	= 25;
	const int  RETRO_MONTHS = 6;
	const int  INPUT_WIDTH  = 29;

	const int TOTAL_TESTS 	= 10;
	
	int CaseCount;			// IN & CALC 		- the # if test cases (1 to 5)

	char  name[NAME_SIZE];  // IN & OUT 	    - The name of the user.
	float currentSalary;    // IN, CALC & OUT   - The current salary.
    float payIncrease;		// IN, CALC & OUT   - The percent pay increase
                            //				      expressed in decimal form.
	float newSalary;        // CALC & OUT       - The new annual salary.
	float monthlySalary;    // CALC & OUT       - The new monthly salary.
	float retroPay;         // CALC & OUT       - Specified retroactive pay.		


    //OUTPUT - Heading

	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  PROJECT #" << setw(5) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << setw(17) << "*  DATE"  << ": " << "10/3/18" << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT - Reads in the name of the user, user's current salary, and the
	 * user's pay increase as follows.
     *
	 * What is your name?           Patrick Wilson
     * What is your current salary? 50000
     * What is your pay increase?   .10
	 *************************************************************************/

		// INPUT - name, current salary, pay increase

	for (CaseCount = 1; CaseCount <= TOTAL_TESTS; CaseCount = CaseCount + 1)
	{
				cout << left;
		cout << "TEST CASE #" << CaseCount << ":"	<< endl;
		cout << right;
		
		cout << left;
		cout << setw(INPUT_WIDTH) << "What is your name? ";
		cin.getline(name, NAME_SIZE);

		cout << setw(INPUT_WIDTH) << "What is your current salary? ";
		cin  >> currentSalary;

		cout << setw(INPUT_WIDTH) << "What is your pay increase? ";
		cin  >> payIncrease;
		cout << endl;
		cout << right;

		/*************************************************************************
		 PROCESSING - Calculate the new salary, the monthly salary, and the
		specified retroactive pay.
		*************************************************************************/

		newSalary		=	(currentSalary * payIncrease) + currentSalary;

		monthlySalary	=	newSalary / 12;

		retroPay		=	((newSalary - currentSalary) / 12) * RETRO_MONTHS;
		

		/*************************************************************************
		 * OUTPUT - Will output the user's new salary, their monthly salary, and
		 * their retroactive pay as follows.
		 *
		 * Patrick Wilson's SALARY INFORMATION
		 *
		 * New Salary     Monthly Salary     Retroactive Pay
		 *    5000.00            4583.33             2500.00
		 *************************************************************************/

		cout << name         << "'s"           << " SALARY INFORMATION"  << endl;

		cout << left;
		cout << setw(15)	 << "New Salary"   << setw(19) 	 << "Monthly Salary";
		cout << setw(20) 	 << "Retroactive Pay"			 << endl;
		cout << right;

		cout << setprecision(2)	               << fixed;
		cout << setw(10)     << newSalary;
		cout << setw(19)	 << monthlySalary  << setw(20)   << retroPay;
		cout << endl << endl << endl;	
		cin.ignore(10000,'\n');
		cout.unsetf(ios::fixed);		
	} //for (CaseCount = 1; CaseCount <= TOTAL_TESTS; CaseCount = CaseCount + 1)

	return 0;
}