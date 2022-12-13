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
string questions[14] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula?", "Which is the highest mountain in the world?","Which country's national football team won the 2018 WC in Russia?", "Which is the closest planet to the Sun?","Where is Lionel Messi from?",
"Which year Bulgaria was freed from Turkish slavery?","Which is the capital city of Canada?", "Who is the football player with the most Ballon d'Or won?(answer only with family name)", "Which is the capital city of Albania?", "Which year did the second world war star?", "Which is the capital of Bulgaria?", "Which year did Vasil Levski die?", "Which year did the first world war start?" };
string currentQuestion;


void Questions()
{

	random_device(rd);
	uniform_int_distribution<int> dist(0, 13);
	currentQuestion = questions[dist(rd)];


}
void Forfeit()
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
	cout << "						=================================================================" << endl;
	cout << "						=========You decided to stop and get the collected money=========" << endl;
	cout << "						=================================================================" << endl;
	cout << "									You won " << moneyCollected << " BGN";
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

	cout << "							  _____ _____ _____ _____    _____ _____ _____ _____   " <<endl;
	cout << "							 |   __|  _  |     |   __|  |     |  |  |   __| __  | " <<endl;
	cout << "							 |  |  |     | | | |   __|  |  |  |  |  |   __|    -|" <<endl;
	cout << "							 |_____|__|__|_|_|_|_____|  |_____|\\___/|_____|__|__|" <<endl;

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
	cout << "		 ######   #######  ##    ##  ######   ########     ###    ######## ##     ## ##          ###    ######## ####  #######  ##    ##  ###### " << endl;
	cout << "		##    ## ##     ## ###   ## ##    ##  ##     ##   ## ##      ##    ##     ## ##         ## ##      ##     ##  ##     ## ###   ## ##    ##" << endl;
	cout << "		##       ##     ## ####  ## ##        ##     ##  ##   ##     ##    ##     ## ##        ##   ##     ##     ##  ##     ## ####  ## ##       " << endl;
	cout << "		##       ##     ## ## ## ## ##   #### ########  ##     ##    ##    ##     ## ##       ##     ##    ##     ##  ##     ## ## ## ##  ######  " << endl;
	cout << "		##       ##     ## ##  #### ##    ##  ##   ##   #########    ##    ##     ## ##       #########    ##     ##  ##     ## ##  ####       ## " << endl;
	cout << "		##    ## ##     ## ##   ### ##    ##  ##    ##  ##     ##    ##    ##     ## ##       ##     ##    ##     ##  ##     ## ##   ### ##    ## " << endl;
	cout << "		 ######   #######  ##    ##  ######   ##     ## ##     ##    ##     #######  ######## ##     ##    ##    ####  #######  ##    ##  ######  " << endl;
	cout << endl;
	cout << "														 ====================" << endl;
	cout << "														 ==You won 1500 BGN==" << endl;
	cout << "														 ====================" << endl;
}

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


	cout << "" << endl;


}

void mainMenu()
{
	int menuChoice;
	cout << "              " <<
		"MENU" << endl;
	cout << "              " <<
		"1 START GAME" << endl;
	cout << "              " <<
		"2 RULES" << endl;
	cout << "              " <<
		"3 EXIT GAME" << endl;
	cin >> menuChoice;
	if (menuChoice == 1)
		FrontEnd();
	if (menuChoice == 2)
		Rules();

}



int main()

{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
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
		if (questions[0] == currentQuestion && answer == "Russia" ||
			questions[1] == currentQuestion && answer == "Musalla" ||
			questions[2] == currentQuestion && answer == "Himalayas" ||
			questions[3] == currentQuestion && answer == "France" ||
			questions[4] == currentQuestion && answer == "Mercury" ||
			questions[5] == currentQuestion && answer == "Argentina" ||
			questions[6] == currentQuestion && answer == "1878" ||
			questions[7] == currentQuestion && answer == "Ottawa" ||
			questions[8] == currentQuestion && answer == "Messi" ||
			questions[9] == currentQuestion && answer == "Tirana" ||
			questions[10] == currentQuestion && answer == "1939" ||
			questions[11] == currentQuestion && answer == "Sofia" ||
			questions[12] == currentQuestion && answer == "1873" ||
			questions[13] == currentQuestion && answer == "1914")

		{
			TrueAnswer();
		}
		else if(answer != "!F")
		{
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
			if (lifeCounter > 0)
			{
				
				Forfeit();
				system("pause");
				break;
			}


		}
		

	}


}