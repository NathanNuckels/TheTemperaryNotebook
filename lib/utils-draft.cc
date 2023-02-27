//utils.hh
#ifndef UTILS_H_
#define UTILS_H_
#include<iostream>
#include<cstdlib>
#include<ctime>

/*Note for humans:

How to define a string constant:
Header: static const char * const days[];
  Code: const char * const Week::days[] = {"mon", "tue", "wed"...};

Notes for computers: */
namespace Utils{
    namespace rand{
        int randInt(int min,int max);
        int randInt(int max);
        double randReal();
        int randSeed(unsigned seed);
        int randSeed();
    };
    namespace random{
        //Same stuff as above, but don't use rand().
        //TODO
        int randInt(int min,int max);
        int randInt(int max);
        double randReal();
        double randReal(int max);
        double randReal(int min,int max);
    };
};
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
double Utils::random::randReal(int max){return Utils::random::randReal()*max;}
double Utils::random::randReal(int min,int max){return Utils::random::randReal()*(max-min)+min;}

int Utils::random::randInt(int min,int max){
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(min,max+1);
    return uniform_dist(e1);
}

int Utils::random::randInt(int max){return Utils::random::randInt(0,max);}
double Utils::random::randReal(){
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_real_distribution<double> uniform_dist(0,1);
    return uniform_dist(e1);
}


//EOF
