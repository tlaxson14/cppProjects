/***********************************************************
 Name: Travis Laxson
 Date: 12/7/17
 Description: Source header file containing SewerWorld Class
 private and public member variable declarations.
************************************************************/
#ifndef SewerWorld_hpp
#define SewerWorld_hpp
#include "Character.hpp"
#include "LoserGang1.hpp"
#include "SewerEntrance.hpp"
#include "SewerTunnel_1.hpp"
#include "LoserGang2.hpp"
#include "SewerMain.hpp"
#include "SewerTunnel_2.hpp"
#include "SewerTunnel_3.hpp"
#include "LoserGang3.hpp"
#include "DeepSewer.hpp"
#include "SewerTunnel_4.hpp"
#include "LoserGang4.hpp"
#include "SewerTunnel_5.hpp"
#include "LoserGang5.hpp"
#include "PennywiseLair.hpp"

class SewerWorld{
private:
    Character *character;
public:
    Character* getCharacter();
    SewerWorld();
};

#endif
