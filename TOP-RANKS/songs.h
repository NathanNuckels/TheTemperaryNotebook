#ifndef SONGS_H_
#define SONGS_H_

class Song{
  private:
    bool single;
    int track;
    int score;
    std::string name;
    std::string album;
    std::string author;
  public:
    Song(std::string title,std::string album,std::string band, int number,bool single);
    std::string getName();
    std::string getBand();
    std::string getAlbum();
    int getNumber();
    int getScore();
    void addScore();
}

#endif
