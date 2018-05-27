#ifndef BURRITO_H
#define BURRITO_H

class Burrito{
  public:
    int num;
    Burrito();
    Burrito(int);
    Burrito operator+(Burrito);

};

#endif