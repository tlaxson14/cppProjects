/**************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file for
 game functions declarations used to
 show the desription of the game,
 play and run the game, validate the
 choice input, get the hero name of
 user's choosing, directional movement
 and game action selection from menu.
***************************************/
#include "Character.hpp"
#include "SewerWorld.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <ctime>
#include <chrono>
using namespace std;

void playGame();
void runGame(Character *);
void showDescription();
void validate(int &);
void validate_direction(char &);
string heroName();
int gameAction();
