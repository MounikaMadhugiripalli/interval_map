/*
 * game_programming.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: mounika.madhugiripalli
 */
#include <iostream>
#include<string>
#include<ctime>

using namespace std;

class Warrior {
private:
    string name;
    int health;
    int attack;
    int block;
public:
    string getname()
    {
        return this->name;
    }
    int gethealth()
        {
            return this->health;
        }
    int getblock()
            {
                return this->block;
            }
    int getattack()
            {
                return this->attack;
            }
    void setname(string name)
        {
            this->name = name;
        }
       void sethealth(int health)
            {
                 this->health = health;
                 cout<<this->name<<" health down to "<<this->health<<endl;
            }
       void setblock(int block)
                {
                     this->block = block;
                }
        void setattack(int attack)
                {
                    this->attack = attack;
                    cout<<this->name<<" attacks "<< " and delivers "<<this->attack<<" blows\n";
                }
       // void whowins
    Warrior(string name,int health,int attack,int block){
        this->name = name;
        this->health = health;
        this->attack = attack;
        this->block = block;
    }
    ~Warrior()
    {
        cout<<"Warrior "<<this->getname()<<" destroyed\n";
    }
};
class Battle{
    private:
        Warrior Warrior1,Warrior2;
    public:
    Battle(Warrior Warrior1, Warrior Warrior2){
        this->Warrior1 = Warrior1;
        this->Warrior2 = Warrior2;
    }
    void BattleBegin(){
        while((Warrior1.gethealth()>0) && (Warrior2.gethealth()>0)) {
               int attack = rand() % 20;
               int block = rand() % 20;
               Warrior1.setattack(attack-block); // 1 attacks 2


               int health = Warrior2.gethealth();
               Warrior2.sethealth(health-(attack - block));

               attack = rand() % 20;
               block = rand() % 20;
               Warrior2.setattack(attack-block);

               health = Warrior1.gethealth();
               Warrior1.sethealth(health-(attack-block));
           }
        cout<<"game over!\n";
    }
};
int main()
{
    srand(time(NULL));
    Warrior Thor("Thor",100,15,20);
    Warrior Hulk("Hulk",130,20,20);
    Battle battle1(Thor,Hulk);
    battle1.BattleBegin();

    if(Thor.gethealth()!=0)
        cout<<"Thor wins!";
    else
        cout<<"hulk wins\n";
    return 0;

}



