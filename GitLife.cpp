#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

enum class Title {
    None,
    Student,
    Teacher,
    Police,
    Fire_Fighter,
    Nurse,
    Doctor,
    Streamer,
};
class Person {
    private:
    //Person has
    string name;
    int age;
    double wealth;
    Title activetitle = Title::None;
    vector<Title> earnedtitle;

    public:
    Person(string startName, int startAge, double startWealth) :
    name(move(startName)), age(startAge), wealth(startWealth) {}

    void ChangeTitle(Title newtitle) {
        activetitle = newtitle;
    }
};

