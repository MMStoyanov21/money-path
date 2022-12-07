#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>
#include <cstring>

using namespace std;

int counter = 3;
int player = 107;
int moneyCollected = 0, money = 100;
string questions[8] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula?", "Which is the highest mountain in the world?","Which country's national football team won the 2018 WC in Russia?", "What is the name of the planet we live on?","Where is Lionel Messi from?","Which year Bulgaria was freed from Turkish slavery?","Which is the capital city of Canada?" };


void Questions()
{
	random_device(rd);
	uniform_int_distribution<int> dist(0, 7);
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
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << "  FINISH                                                                                                        " << endl;
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
	if (money <= 999)
	{
		cout << "Question: ";
		Questions();
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(45) << " ________________________ " << endl;
		cout << setw(20) << "|" << setw(25) << "|" << endl;
		cout << setw(20) << "|" << setw(25) << "|" << "                         You have: " << counter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << "|" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << "||" << endl;
		cout << setw(33) << "||" << endl;
		cout << "-------------------------------||---------------------------------------------------------------------------------------";
		cout << "   FINISH                                                                                                          " << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player -= 10) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";

	}
	else
	{
		cout << "Question: ";
		Questions();
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(44) << " _________________________" << endl;
		cout << setw(19) << "|" << setw(26) << " |" << endl;
		cout << setw(19) << "|" << setw(26) << " |" << "                         You have: " << counter << " lives left " << endl;
		cout << setw(34) << "|  Question for " << money << " BGN  |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(19) << "|" << setw(26) << " |" << endl;
		cout << setw(45) << "|___________  ____________|" << endl;
		cout << setw(33) << "||" << endl;
		cout << setw(33) << "||" << endl;
		cout << "-------------------------------||---------------------------------------------------------------------------------------";
		cout << "   FINISH                                                                                                          " << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player -= 10) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------";

	}


}
void WrongAnswer()
{
	counter--;
	system("cls");

	cout << "Question: ";
	Questions();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << "                         You have: " << counter << " lives left " << endl;
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||---------------------------------------------------------------------------------------";
	cout << "   FINISH                                                                                                      " << endl;
	cout << "                                                                                                           " << endl;
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
	if (moneyCollected < 500)
	{
		cout << "						   You won 0 BGN";
	}
	else if (moneyCollected >= 500 && money <= 999)
	{
		cout << "						   You won 500 BGN";
	}

}
void GameWon()
{
	system("cls");
	cout << "					===============================" << endl;
	cout << "					====CONGRATULATIONS YOU WON====" << endl;
	cout << "					===============================" << endl;
	cout << "						You won 1000 BGN";
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
		if (questions[0] == "Which is the biggest country in the world?" && answer == "Russia" || questions[1] == "Which is the highest peak on the Balkan Peninsula?" && answer == "Musalla" || questions[2] == "Which is the highest mountain in the world?" && answer == "Himalayas" || questions[3] == "Which country's national football team won the 2018 WC in Russia?" && answer == "France" || questions[4] == "What is the name of the planet we live on?" && answer == "Earth" || questions[5] == "Where is Lionel Messi from?" && answer == "Argentina" || questions[6] == "Which year Bulgaria was freed from Turkish slavery?" && answer == "1878" || questions[7] =="Which is the capital city of Canada?" && answer == "Ottawa")
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
		if (player <= 7)
		{
			GameWon();
			break;
		}
	} while (true);




}