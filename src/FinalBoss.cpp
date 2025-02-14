#include "../lib/FinalBoss.h"


void FinalBoss::Slam(Player& target){
    cout << "The Stanimal Slammed you! Damage dealt: " << damageEnemyPhys(target, 4) << endl;
}

void FinalBoss::Charge(){
    buffCounter = 2;
    bossStats.addStat("matk",bossStats.getMAtk()); //doubles magic attack
    chargeCounter += 1;
    cout << "The Stanimal Charged up!" << endl;
}

void FinalBoss::Explosion(Player& target){
    cout << " The Stanimal caused an Explosion! Damage dealt: " << damageEnemyMagic(target, 5) << endl;
}

void FinalBoss::BackToFull(){
    bossStats.addHP(9999);
    cout << "Boss healed back to full HP!" << endl;
}

void FinalBoss::Cleave(Player& target){
    cout << " The Stanimal caused an Explosion! Damage dealt: " << damageEnemyPhys(target, 5+chargeCounter) << endl;
}

void FinalBoss::Brace(){
    bossStats.addStat("mdef", 1);
    bossStats.addStat("def", 1);
    cout << "The Stanimal Braced!" << endl;
}

void FinalBoss::SpeedUp(){
    bossStats.addStat("spd", 2);
    cout << "The Stanimal Sped up!" << endl;
}

void FinalBoss::TheEnd(Player& target){
    target.getStats().reduceHp(9999);
}