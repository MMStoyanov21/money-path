#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>
#include <cstring>

using namespace std;

int counter = 3;
int player = 7;
int moneyCollected = 0, money = 100;
string questions[10] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula?", "Which is the highest mountain in the world?","Which country's national football team won the 2018 WC in Russia?", "Which is the closest planet to the Sun?","Where is Lionel Messi from?","Which year Bulgaria was freed from Turkish slavery?","Which is the capital city of Canada?", "Who is the football player with the most Ballon d'Or won?(answer only with family name)", "Which is the capital city of Albania?" };
string currentQuestion;

void Questions()
{

	random_device(rd);
	uniform_int_distribution<int> dist(0, 9);
	currentQuestion = questions[dist(rd)];


}

void FrontEnd()
{
	system("cls");

	cout << "Question: ";
	Questions();
	cout << currentQuestion;
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
	cout << "-------------------------------||------------------------------------------------------------------------------------------------------------------------------";
	cout << setw(211) << "FINISH" << endl;
	cout << "                                                                                                           " << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------";





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
		cout << currentQuestion;
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
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------";
		cout << setw(211) << "FINISH" << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player += 10) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;


	}
	else
	{
		cout << "Question: ";
		Questions();
		cout << currentQuestion;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(45) << " ________________________ " << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "                         You have: " << counter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << " ||" << endl;
		cout << setw(33) << " ||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------";
		cout << setw(211) << "FINISH" << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player += 10) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	}


}
void WrongAnswer()
{
	counter--;
	system("cls");
	if (money <= 999)
	{
		cout << "Question: ";
		Questions();
		cout << currentQuestion;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(45) << " ________________________ " << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "                         You have: " << counter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN  |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << "||" << endl;
		cout << setw(33) << "||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------";
		cout << setw(211) << "FINISH" << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	}
	else
	{
		cout << "Question: ";
		Questions();
		cout << currentQuestion;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(45) << " ________________________ " << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "                         You have: " << counter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN |" << "			    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << " ||" << endl;
		cout << setw(33) << " ||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------";
		cout << setw(211) << "FINISH" << endl;
		cout << "                                                                                                           " << endl;
		cout << setw(player) << "[] " << endl;
		cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	}



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
	cout << "                                                                                             =========================" << endl;
	cout << "                                                                                             ========Game Over========" << endl;
	cout << "                                                                                             =========================" << endl;
	if (moneyCollected < 500)
	{
		cout << "						                                                  You won 0 BGN";
	}
	else if (moneyCollected >= 500 && money <= 999)
	{
		cout << "						                                                  You won 500 BGN";
	}
	else if (moneyCollected >= 1000 && money <= 1499)
	{
		cout << "						                                                  You won 1000 BGN";
	}

}
void GameWon()
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
	cout << "																																																																																					===============================" << endl;
	cout << "																																																																																					====CONGRATULATIONS YOU WON====" << endl;
	cout << "																																																																																					===============================" << endl;
	cout << "																																																																																							You won 1500 BGN" << endl;
}

int main()

{
	//Front-end//
	FrontEnd();



	// Back-end//
	string answer;

	cout << endl;
	cout << endl;


	while (true) {
		cout << "Input your answer here:";
		cin >> answer;
		if (questions[0] == currentQuestion && answer == "Russia" ||
			questions[1] == currentQuestion && answer == "Musalla" ||
			questions[2] == currentQuestion && answer == "Himalayas" ||
			questions[3] == currentQuestion && answer == "France" ||
			questions[4] == currentQuestion && answer == "Mercury" ||
			questions[5] == currentQuestion && answer == "Argentina" ||
			questions[6] == currentQuestion && answer == "1878" ||
			questions[7] == currentQuestion && answer == "Ottawa" ||
			questions[8] == currentQuestion && answer == "Messi" ||
			questions[9] == currentQuestion && answer == "Tirana")
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
		if (player > 155)
		{
			GameWon();
			break;
		}

	}





}