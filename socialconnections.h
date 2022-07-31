#ifndef socialconnections_h
#define socialconnections_h

#include <string>

#define SIZE 10
using namespace std;

class socialconnections {
public:
    socialconnections();
    void addPeople(string name);
    void addMeet(int p1, int p2);
    int findMinWayDFS(int from, int to);
    void inner(int current, int to, bool visited[], int& minDistance, int currentDistance);
    int getPeopleCount() const;
    string getPeopleName(int index) const;
private:
    bool meetExists(int p1, int p2);
    int matrix[SIZE][SIZE];

    struct People
    {
        string name;
    };

    People peoples[SIZE];

    int peopleCount;        
};

#endif

