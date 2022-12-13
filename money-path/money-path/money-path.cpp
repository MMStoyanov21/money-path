#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>
#include <cstring>
#include <conio.h>

using namespace std;

int lifeCounter = 3;
int player = 7;
int moneyCollected = 0, money = 100;
int questionsLength = 16;
string questions[16] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula?",
"Which is the highest mountain in the world?","Which country's national football team won the 2018 WC in Russia?", "Which is the closest planet to the Sun?","Where is Lionel Messi from?",
"Which year Bulgaria was freed from Turkish slavery?","Which is the capital city of Canada?",
"Who is the football player with the most Ballon d'Or won?(answer only with family name)", "Which is the capital city of Albania?", "Which year did the second world war star?",
"Which is the capital of Bulgaria?", "Which year did Vasil Levski die?", "Which year did the first world war start?","Calculate this: 1^0 + 1", "" };
string currentQuestion;
string answers[16] = {
	"Russia",
	"Musalla",
	"Himalayas",
	"France",
	"Mercury",
	"Argentina",
	"1878",
	"Ottawa",
	"Messi",
	"Tirana",
	"1939",
	"Sofia",
	"1873",
	"1914",
	"2",
	"tedo" };
int menuChoice;


void Questions()
{

	random_device(rd);
	uniform_int_distribution<int> dist(0, (questionsLength - 1 >= 1) ? questionsLength - 1 : 1);
	currentQuestion = questions[dist(rd)];


}
bool checkAnswer(string answer)
{
	for (int i = 0; i < questionsLength; i++)
	{
		if (questions[i] == currentQuestion && answers[i] == answer)
		{
			return true;
		}

	}
	return false;
}
void Forfeit()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "						=================================================================" << endl;
	cout << "						=========You decided to stop and get the collected money=========" << endl;
	cout << "						=================================================================" << endl;
	cout << "									You won " << moneyCollected << " BGN";
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
	cout << setw(20) << "|" << setw(25) << "|" << "				      You have: " << lifeCounter << " lives left " << endl;
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
	cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
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
		cout << setw(20) << "|" << setw(25) << "|" << "				      You have: " << lifeCounter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN  |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << "|" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << "||" << endl;
		cout << setw(33) << "||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
		cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
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
		cout << setw(20) << "|" << setw(25) << " |" << "				      You have: " << lifeCounter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << " ||" << endl;
		cout << setw(33) << " ||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
		cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
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
	lifeCounter--;
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
		cout << setw(20) << "|" << setw(25) << " |" << "				      You have: " << lifeCounter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN  |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << "||" << endl;
		cout << setw(33) << "||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
		cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
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
		cout << setw(20) << "|" << setw(25) << " |" << "				      You have: " << lifeCounter << " lives left " << endl;
		cout << setw(35) << "|  Question for " << money << " BGN |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
		cout << setw(20) << "|" << setw(25) << " |" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
		cout << setw(45) << "|___________  ___________|" << endl;
		cout << setw(33) << " ||" << endl;
		cout << setw(33) << " ||" << endl;
		cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
		cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
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

	cout << "							  _____ _____ _____ _____    _____ _____ _____ _____   " << endl;
	cout << "							 |   __|  _  |     |   __|  |     |  |  |   __| __  | " << endl;
	cout << "							 |  |  |     | | | |   __|  |  |  |  |  |   __|    -|" << endl;
	cout << "							 |_____|__|__|_|_|_|_____|  |_____|\\___/|_____|__|__|" << endl;

	cout << endl;
	if (moneyCollected < 500)
	{
		cout << "									=====================" << endl;
		cout << "									====You won 0 BGN====" << endl;
		cout << "									=====================" << endl;
	}
	else if (moneyCollected >= 500 && money <= 999)
	{
		cout << "									=====================" << endl;
		cout << "						            ===You won 500 BGN===" << endl;
		cout << "									=====================" << endl;
	}
	else if (moneyCollected >= 1000 && money <= 1499)
	{
		cout << "									====================" << endl;
		cout << "						            ==You won 1000 BGN==" << endl;
		cout << "									====================" << endl;
	}
}
void GameWon()
{
	system("cls");
	cout << endl << endl << endl << endl;
	cout << endl << endl << endl << endl << endl;
	cout << endl << endl << endl << endl;
	cout << "		 ######   #######  ##    ##  ######   ########     ###    ######## ##     ## ##          ###    ######## ####  #######  ##    ##  ###### " << endl;
	cout << "		##    ## ##     ## ###   ## ##    ##  ##     ##   ## ##      ##    ##     ## ##         ## ##      ##     ##  ##     ## ###   ## ##    ##" << endl;
	cout << "		##       ##     ## ####  ## ##        ##     ##  ##   ##     ##    ##     ## ##        ##   ##     ##     ##  ##     ## ####  ## ##       " << endl;
	cout << "		##       ##     ## ## ## ## ##   #### ########  ##     ##    ##    ##     ## ##       ##     ##    ##     ##  ##     ## ## ## ##  ######  " << endl;
	cout << "		##       ##     ## ##  #### ##    ##  ##   ##   #########    ##    ##     ## ##       #########    ##     ##  ##     ## ##  ####       ## " << endl;
	cout << "		##    ## ##     ## ##   ### ##    ##  ##    ##  ##     ##    ##    ##     ## ##       ##     ##    ##     ##  ##     ## ##   ### ##    ## " << endl;
	cout << "		 ######   #######  ##    ##  ######   ##     ## ##     ##    ##     #######  ######## ##     ##    ##    ####  #######  ##    ##  ######  " << endl;
	cout << endl;
	cout << "									====================" << endl;
	cout << "									==You won 1500 BGN==" << endl;
	cout << "									====================" << endl;

}



void mainMenu();

void Rules()
{
	system("cls");

	cout << " /$$$$$$$  /$$   /$$ /$$       /$$$$$$$$  /$$$$$$ " << endl;
	cout << "| $$__  $$| $$  | $$| $$      | $$_____/ /$$__  $$" << endl;
	cout << "| $$  \\ $$| $$  | $$| $$      | $$      | $$  \\__/" << endl;
	cout << "| $$$$$$$/| $$  | $$| $$      | $$$$$   |  $$$$$$ " << endl;
	cout << "| $$__  $$| $$  | $$| $$      | $$__/    \\____  $$" << endl;
	cout << "| $$  \\ $$| $$  | $$| $$      | $$       /$$  \\ $$" << endl;
	cout << "| $$  | $$|  $$$$$$/| $$$$$$$$| $$$$$$$$| $$$$$$/" << endl;
	cout << "|__/  |__/ \\______/ |________/|________/ \\______/" << endl;

	cout << "Rule 1: After starting the game there will be 15 easy questions and if you answer them right, you will win 1500 BGN" << endl;
	cout << "1 Menu" << endl;
	cout << "2 Exit" << endl;
	cin >> menuChoice;
	if (menuChoice == 1)
	{
		mainMenu();
	}
	else if (menuChoice == 0)
	{
		exit(0);
	}


}
void mainMenu()
{

	system("cls");
	cout << " /$$      /$$                                               /$$$$$$$             /$$     /$$  " << endl;
	cout << "| $$$    /$$$                                              | $$__  $$           | $$    | $$" << endl;
	cout << "| $$$$  /$$$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$      | $$  \\ $$ /$$$$$$  /$$$$$$  | $$$$$$$" << endl;
	cout << "| $$ $$/$$ $$ /$$__  $$| $$__  $$ /$$__  $$| $$  | $$      | $$$$$$$/|____  $$|_  $$_/  | $$__  $$" << endl;
	cout << "| $$  $$$| $$| $$  \\ $$| $$  \\ $$| $$$$$$$$| $$  | $$      | $$____/  /$$$$$$$  | $$    | $$  \\ $$" << endl;
	cout << "| $$\\  $ | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$      | $$      /$$__  $$  | $$ /$$| $$  | $$" << endl;
	cout << "| $$ \\/  | $$|  $$$$$$/| $$  | $$|  $$$$$$$|  $$$$$$$      | $$     |  $$$$$$$  |  $$$$/| $$  | $$" << endl;
	cout << "|__/     |__/ \\______/ |__/  |__/ \\_______/ \\____  $$      |__/      \\_______/   \\___/  |__/  |__/" << endl;
	cout << "                                            /$$  | $$                                             " << endl;
	cout << "                                           |  $$$$$$/                                             " << endl;
	cout << "                                            \______/                                              " << endl << endl << endl;
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
	cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
	cout << "MENU" << endl;
	cout << "1 START GAME" << endl;
	cout << "2 RULES" << endl;
	cout << "3 EXIT GAME" << endl;
	cin >> menuChoice;
	if (menuChoice == 1)
		FrontEnd();
	else if (menuChoice == 2)
		Rules();
	else if (menuChoice == 3)
		exit(0);
}
void removeQuestion()
{

	for (int i = 0; i < 14; i++)
	{
		if (questions[i] == currentQuestion)
		{
			questionsLength -= 1;
			for (int j = i; j < questionsLength; j++)
			{
				questions[j] = questions[j + 1];
				answers[j] = answers[j + 1];

			}

		}
	}
}


int main()

{
	//Front-end//
	mainMenu();

	//Front-end//




	// Back-end//
	string answer;

	cout << endl;
	cout << endl;


	while (true) {
		cout << "Input your answer here:";
		cin >> answer;

		if (checkAnswer(answer))
		{
			removeQuestion();
			TrueAnswer();
		}
		else if (answer != "!F")
		{
			removeQuestion();
			WrongAnswer();
		}
		if (lifeCounter == 0)
		{
			GameOver();
			system("pause");
			break;
		}
		if (player > 155)
		{
			GameWon();
			system("pause");
			break;
		}
		if (answer == "!F")
		{
			Forfeit();
			system("pause");
			break;
		}


	}


}
