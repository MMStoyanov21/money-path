#include "main.h"

int lifeCounter = 4;
int player = 7;
int moneyCollected = 0, money = 100;
int questionsLength = 24;
string currentQuestion;
int menuChoice;
string answer;

string questionsArr[24] = { "Which is the biggest country in the world?", "Which is the highest peak on the Balkan Peninsula?",
"Which is the highest mountain in the world?","Which country's national football team won the 2018 WC in Russia?", "Which is the closest planet to the Sun?","Where is Lionel Messi from?",
"Which year Bulgaria was freed from Turkish slavery?","Which is the capital city of Canada?","Who is the football player with the most Ballon d'Or won?(answer only with family name)",
"Which is the capital city of Albania?", "Which year did the second world war star?", "Which is the capital of Bulgaria?", "Which year did Vasil Levski die?", "Which year did the first world war start?",
"Calculate: 1^0 + 1", "Calculate: 2^3 + 16 - 23", "Calculate: 8 x 2 - 2 (2 + 3)", "Calculate: 100 - 10 ^ 2 + 3 ^ 2 * 5", "How many seconds are in one hour?", "When did Bulgaria last qualify for the world cup ?",
"Calculate: (2 ^ 2 - 2) * 3", "Which was the first country attacked by Germany in WWII?", "Calculate: 10 * 3 - 4 ^ 2", "What are tires made out of?" };
string answers[24] = {
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
	"1",
	"6",
	"45",
	"3600",
	"1998",
	"6",
	"Poland",
	"14",
	"rubber" };

void game()
{
	system("cls");
	while (true) {
		cout << "Input your answer here:";
		getline(cin, answer);

		if (checkAnswer(answer))
		{
			removeQuestion();
			trueAnswer();
		}
		else if (answer != "!F")
		{
			removeQuestion();
			wrongAnswer();
		}
		if (lifeCounter == 0)
		{
			gameOver();
			cin.get();
			break;
		}
		if (player > 155)
		{
			gameWon();
			cin.get();
			break;
		}
		if (answer == "!F")
		{
			forfeit();
			cin.get();
			break;
		}
	}
}

void newLines(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
	}
}
void questions()
{
	random_device(rd);
	uniform_int_distribution<int> dist(0, (questionsLength > 1) ? questionsLength - 1 : 1);
	currentQuestion = questionsArr[dist(rd)];
}
void printFrame(bool extraSpaceInBorder = 0, bool movePlayer = 1)
{
	system("cls");
	cout << "Question: ";
	questions();
	(movePlayer) ? player += 10 : player;
	cout << currentQuestion;
	newLines(3);
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25 + extraSpaceInBorder) << "|" << endl;
	cout << setw(20) << "|" << setw(25 + extraSpaceInBorder) << "|" << "				      You have: " << lifeCounter << " lives left " << endl;
	cout << setw(35) << "|  Question for " << money << " BGN  |" << "				    You have: " << moneyCollected << " BGN collected" << endl;
	cout << setw(20) << "|" << setw(25 + extraSpaceInBorder) << "|" << "         If you want to stop and get the money you collected until now input '!F'" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||-------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
	cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	newLines(3);
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}

bool checkAnswer(string answer)
{
	for (int i = 0; i < questionsLength; i++)
	{
		if (questionsArr[i] == currentQuestion && answers[i] == answer)
		{
			return true;
		}

	}
	return false;
}
void forfeit()
{
	system("cls");
	newLines(9);
	cout << "						=================================================================" << endl;
	cout << "						=========You decided to stop and get the collected money=========" << endl;
	cout << "						=================================================================" << endl;
	cout << "									You won " << moneyCollected << " BGN" << endl;
}



void trueAnswer()
{
	money += 100;
	moneyCollected += 100;

	system("cls");
	if (money <= 999)
	{

		printFrame();

	}
	else
	{
		printFrame(1);
	}


}
void wrongAnswer()
{
	lifeCounter--;
	system("cls");
	if (money <= 999)
	{
		printFrame(0, 0);
	}
	else
	{
		printFrame(1, 0);
	}



}
void gameOver()
{
	system("cls");
	newLines(9);

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
		cout << "									==You won 1000 BGN==" << endl;
		cout << "									====================" << endl;
	}
}

void gameWon()
{
	system("cls");
	newLines(13);
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


void rules()
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
	cout << endl;
	cout << "Rule 1: After starting the game there will be 15 easy questions and if you answer them right, you will win 1500 BGN" << endl;

	cout << "1 Menu" << endl;
	cout << "2 Exit" << endl;
	cout << endl << "Your choice here: ";
	cin >> menuChoice;

	while (true)
	{
		if (menuChoice == 2 || menuChoice == 1)
		{
			break;
		}
		cout << "Wrong input, try again: ";
		cin >> menuChoice;
	}
	if (menuChoice == 1)
	{
		mainMenu();
	}
	else if (menuChoice == 2)
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
	cout << "                                           \\______/                                              " << endl << endl << endl;
	cout << setw(45) << " ________________________ " << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(20) << "|" << setw(18) << "Let's play!" << setw(7) << "|" << endl;
	cout << setw(20) << "|" << setw(25) << "|" << endl;
	cout << setw(45) << "|___________  ___________|" << endl;
	cout << setw(33) << "||" << endl;
	cout << setw(33) << "||" << endl;
	cout << "-------------------------------||------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << setw(8) << "START" << setw(53) << "CHECKPOINT" << setw(49) << "CHECKPOINT" << setw(48) << "FINISH" << endl;
	cout << setw(59) << "  500 BGN" << setw(50) << " 1000 BGN" << setw(50) << " 1500 BGN" << endl;
	cout << setw(player) << "[] " << endl;
	cout << "   =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====     =====";
	newLines(3);
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
	cout << "MENU" << endl;
	cout << "1 START GAME" << endl;
	cout << "2 RULES" << endl;
	cout << "3 EXIT GAME" << endl;

	cout << "Your choice here: ";
	cin >> menuChoice;
	while(true)
	{
		if (menuChoice == 1 || menuChoice == 2)
		{
			break;
		}
		cout << "Wrong input, try again: ";
		cin >> menuChoice;
	}
	if (menuChoice == 1)
		printFrame(0, 0);
	else if (menuChoice == 2)
		rules();
	else if (menuChoice == 3)
		exit(0);
}
void removeQuestion()
{
	for (int i = 0; i < 24; i++)
	{
		if (questionsArr[i] == currentQuestion)
		{
			questionsLength -= 1;
			for (int j = i; j < questionsLength; j++)
			{
				questionsArr[j] = questionsArr[j + 1];
				answers[j] = answers[j + 1];
			}

		}
	}
}
