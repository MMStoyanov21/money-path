#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <random>
#include <string>
#include <conio.h>

using namespace std;

extern int lifeCounter;
extern int player;

//Prints a new line n amount of times
void newLines(int n);

//Selects a random question from questionsArr
void questions();

bool checkAnswer(string answer);

void forfeit();

void trueAnswer();

void wrongAnswer();

void gameOver();

void gameWon();

void mainMenu();

void rules();

void removeQuestion();

void game();