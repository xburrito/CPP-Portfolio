#include <iostream>
#include <string>
using namespace std;

class Monster
{
  protected:
    int attackPower;
  public:
    int setAttackPower(int a){
      attackPower = a;
    }
};

class Goomba: public Monster
{
  public:
    void attack()
    {
      cout << "Goomba touched you!!! -" << attackPower << endl;
    }
  
};

class Koopa: public Monster{
  public:
    void attack()
    {
      cout << "Koopa hit you with a shell >:( -" << attackPower << endl;
    }
};
  
int main() {
  
  Goomba g;
  Koopa k;
  
  Monster *monster1 = &g;
  Monster *monster2 = &k;
  
  monster1-> setAttackPower(2);
  monster2-> setAttackPower(4);
  
  g.attack();
  k.attack();
  
  return 0;
};