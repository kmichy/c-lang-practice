#include "fightercraft.h"

FighterAircraft::FighterAircraft(){
    setType("戦闘機");
}

void FighterAircraft::fly(){
    cout << "攻撃に出るために飛行" << endl;
}

void FighterAircraft::fight(){
    cout << "戦闘します" << endl;
}