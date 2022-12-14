#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>
#include <cstring>
#include <conio.h>
#include "all.h"

using namespace std;

int main()

{
	//Front-end//
	mainMenu();

	// Back-end//
	string answer;

	cout << endl;
	cout << endl;


	while (true){
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
			forFeit();
			system("pause");
			break;
		}


	}


}
