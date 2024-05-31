#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class Character
{
public:
    Character(QString name, int health, int attack,int MP);
    void takeDamage(int damage);
    void attack(Character *target);
    void takeMP(int MP_needed);
    float HP_percent();
    float MP_percent();
    void MP_recovery();
    void HP_drugrecovery1();
    void HP_drugrecovery2();


    QString name;
    int health;
    int att;
    int MP;
    int initial_health;
    int initial_MP;

    int drug1_num;
    int drug2_num;
};

#endif // CHARACTER_H
