#include <iostream>
using namespace std;
class sports
{
protected:
    string playar;
    int captain;

public:
    sports(string p, int c)
    {
        playar = p;
        captain = c;
    }
    virtual void mahi(){};
};
class football : public sports
{
    float realmadrid;

public:
    football(string p, int c, float rmd) : sports(p, c)
    {
        realmadrid = rmd;
    }
    void mahi()
    {
        cout << "the cricket is the my fav. sports and fav. player is virat" << playar << endl;
        cout << "the best captain in creicket is ms dhoni" << captain << endl;
        cout << "In football relamadrid is fav team" << realmadrid << endl;
    }
};
class football_fcb : public sports
{
    int messi;

public:
    football_fcb(string p, float c, int ms) : sports(p, c)
    {
        messi = ms;
    }
    void mahi()
    {
        cout << "the fav team is india" << playar << endl;
        cout << "messi is the best captin of fcb" << endl;
        cout << "FCB is fav. team dueto meesi is thire" << messi << endl;
    }
};
int main()
{
    string playar;
    float captain, realmadrid;
    int messi;

    playar = "fav playar is ronldo";
    realmadrid = 5.45;
    captain = 7;
    football protugig(playar, captain, realmadrid);

    playar = "fav. playar is messi ";
    messi = 33;
    captain = 54.45;
    football_fcb paris(playar, messi, captain);

    sports* cr7[2];
    cr7[0] = &protugig;
    cr7[1] = &paris;

    cr7[0]->mahi();
    cr7[1]->mahi();
    return 0;
}