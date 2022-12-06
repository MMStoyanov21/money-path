#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int counter = 3;
int player = 107;

void FrontEnd()
{
	system("cls");
	cout << setw(52) << " ______________________________________ " << endl;
	cout << setw(44) << "    |	    Question for 100 leva	   |" << "					 You have " << counter << " lives left" << endl;
	cout << setw(24) << "   |  					   |" << endl;
	cout << setw(44) << "|	     Which is the biggest	   |" << endl;
	cout << setw(36) << "|		 country in the		   |" << endl;
	cout << setw(32) << "   |		     world?		   |" << endl;
	cout << setw(24) << "   |  					   |" << endl;
	cout << setw(52) << "|__________________  __________________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << endl;
	cout << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";

}
void TrueAnswer()
{
	system("cls");

	cout << setw(52) << " ______________________________________ " << endl;
	cout << setw(13) << "|" << setw(29) << "Question for 100 leva" << setw(10) << "|" << "					 You have " << counter << " lives left" << endl;
	cout << setw(13) << "|" << setw(39) << "|" << endl;
	cout << setw(13) << "|" << setw(29) << "Which is the biggest" << setw(10) << "|" << endl;
	cout << setw(13) << "|" << setw(25) << "country in the" << setw(14) << "|" << endl;
	cout << setw(13) << "|" << setw(23) << "world ?" << setw(16) << "|" << endl;
	cout << setw(13) << "|" << setw(39) << "|" << endl;
	cout << setw(52) << "|__________________  __________________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << "                                                                                                          " << endl;
	cout << "                                                                                                           " << endl;
	cout << setw(player - 10) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";

}
void WrongAnswer()
{
	counter--;
	system("cls");
	cout << setw(52) << " ______________________________________ " << endl;
	cout << setw(44) << "    |	    Question for 100 leva	   |" << "					 You have " << counter << " lives left" << endl;
	cout << setw(24) << "   |  					   |" << endl;
	cout << setw(44) << "|	     Which is the biggest	   |" << endl;
	cout << setw(36) << "|		 country in the		   |" << endl;
	cout << setw(32) << "   |		     world?		   |" << endl;
	cout << setw(24) << "   |  					   |" << endl;
	cout << setw(52) << "|__________________  __________________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << endl;
	cout << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";
}
int main()

{

}
