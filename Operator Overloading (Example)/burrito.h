#ifndef BURRITO_H
#define BURRITO_H

class burrito{
  public: 
    int num;
    burrito();
    burrito(int);
    burrito operator+(burrito);
};

#endif //BURRITO_H