//dateChecker.cpp provided by CedMIX Productions
//include declarations
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

//main function
void main()
{
	//initilaize main functions
	string dateValue;
	const char dash = '-';
	const char one = '1';
	const char forwardSlash = '/';
	int loop = -1;
	while (loop != 0)
	{
		//initilaize inside the loop
		int x = 0;
		int invChar = 0;
		int validChar = 0;
		const long stringLengthLimit = 9;
		unsigned long stringdatelength = 0;
		const char lolz30th = '3';
		const char lolz31st = '1';
		const char otherMonth1x = '1';
		const char decemberLimit = '2';
		long monthError = 0, dateError = 0;
		cout << "Enter date (mm/dd/yy) (Enter -1 to end): ";
		getline(cin, dateValue);
		//if -1 is typed
		if (dateValue[0] == dash&&dateValue[1] == one)
		{
			break;
		}
		stringdatelength = dateValue.length();
		//if it had all 8 characters (mm/dd/yy)
		if (stringdatelength = stringLengthLimit)
		{
			//checks if it is only FORWARD SLASHES
			if (dateValue[2] != forwardSlash&&dateValue[5] != forwardSlash)
			{
				cout << "Invalid third and sixth character" << endl;
			}
			else if (dateValue[2] != forwardSlash)
			{
				cout << "Invalid third character" << endl;
			}
			else if (dateValue[5] != forwardSlash)
			{
				cout << "Invalid sixth character" << endl;
			}
			//checks the month and date are valid in their if-else statements respectively
			if (dateValue[0]>otherMonth1x || dateValue[1] >decemberLimit)
			{
				cout << "Invaid month range" << endl;
				monthError = monthError + 1;
			}
			else if (dateValue[3] >= lolz30th &&dateValue[4] > lolz31st)
			{
				cout << "Invalid date range" << endl;
				dateError = dateError + 1;
			}
			//adds the 20yy statement if it passes the forward slash check and avoid the month and date errors
			if (dateValue[2] == forwardSlash&&dateValue[5] == forwardSlash&&monthError!=1&&dateError!=1)
			{
				dateValue.insert(6, "20");
				cout << dateValue << endl;
			}
		}
	}
	cout << "To quit, click close [X] or press any key to exit" << endl;
	_getch();
}
