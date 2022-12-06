#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>

using namespace std;

int counter = 3;
int player = 107;
int moneyCollected = 0, money = 100;
string answer;

void Questions()
{
	string questions[5] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula", "Which is the highest mountain in the world","Which is the football club with the most UCL trophies won", "Which is the closest planet to the Sun" };
	random_device(rd);
	uniform_int_distribution<int> dist(1, 5);
	cout << questions[dist(rd)];
	if (questions[dist(rd)] == "")
	{
		cout << questions[dist(rd)];
		if (questions[dist(rd)] == "")
		{
			cout << questions[dist(rd)];

		}
	}
	
}

void FrontEnd()
{
	system("cls");

	cout << "Question: ";
	Questions();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << "                         You have: " << counter << " lives left " << endl;
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << money << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << "                                                                                                          " << endl;
	cout << "                                                                                                           " << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------";



}
void TrueAnswer()
{
	money += 100;
	moneyCollected += 100;
	system("cls");

	cout << "Question: ";
	Questions();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << "                         You have: " << counter << " lives left " << endl; 
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << money << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << "                                                                                                          " << endl;
	cout << "                                                                                                           " << endl;
	cout << setw(player) << "[] " << endl;
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
void GameOver()
{

	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                               =========================" << endl;
	cout << "                                               ========Game Over========" << endl;
	cout << "                                               =========================" << endl;
}

int main()

{
	//Front-end//
	FrontEnd();



	// Back-end//
	string answer;
	cout << endl;
	cout << endl;


	do {
		cout << "Input your answer here:";
		cin >> answer;
		if (answer == "Russia")
		{
			TrueAnswer();
		}
		else
		{
			WrongAnswer();
		}
		if (counter == 0)
		{
			GameOver();
			break;
		}
	} while (true);




}
