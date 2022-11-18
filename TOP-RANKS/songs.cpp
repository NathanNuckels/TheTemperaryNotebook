#include"songs.h"
using namespace std;
Song::Song(string title,string album,string band,int number,bool single){
  this->single=single;
  this->track=number;
  this->score=0;
  this->name=title;
  this->author=band;
  this->album=album;
}
string Song::getName(){return name;}
string Song::getBand(){return author;}
string Song::getAlbum(){return album;}
int Song::getNumber(){return track;}
int Song::getScore(){return score;}
void addScore(){score++;}
