//utils.hh
#ifndef UTILS_H_
#define UTILS_H_
#include<iostream>
#include<cstdlib>
#include<ctime>

namespace Utils{
    namespace rand{
        int randInt(int min,int max){return (std::rand()%(max-min))+min;}
        int randInt(int max){return std::rand()%max;}
        double randReal();
        int randSeed(unsigned seed){srand(seed);}
        int randSeed(){srend(time(NULL));}
        int rantFloat(){return rand()/(RAND_MAX+1.);}
    }
    namespace random{
        //Same stuff as above, but don't use rand().
        //TODO
    }
}
#endif
//EOF

//utilsRand.cc

#include"utils.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int Utils::rand::randInt(int min,int max){return (std::rand()%(max-min))+min;}
int Utils::rand::randInt(int max){return std::rand()%max;}
double Utils::rand::randReal(){return rand()/(RAND_MAX+1.);}
int Utils::rand::randSeed(unsigned seed){srand(seed);}
int Utils::rand::randSeed(){srend(time(NULL));}
int Utils::rand::rantFloat(){return rand()/(RAND_MAX+1.);}
//EOF
