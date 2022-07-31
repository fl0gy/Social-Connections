#include <iostream>
#include "socialconnections.h"

using namespace std;

int main(int argc, const char* argv[])
{
    socialconnections c;

    // добавляем вершины
    c.addPeople("Dmitry");
    c.addPeople("Kirill");
    c.addPeople("Vladislav");
    c.addPeople("Roman");
    c.addPeople("Kseniya");
    c.addPeople("Dariya");
    c.addPeople("Marina");
    c.addPeople("Petr");
    c.addPeople("Stepan");
    c.addPeople("Kira");


    // добавляем ребра
    c.addMeet(0, 1);
    c.addMeet(1, 2);
    c.addMeet(2, 3);
    c.addMeet(3, 4);
    c.addMeet(4, 5);
    c.addMeet(5, 6);
    c.addMeet(6, 7);
    c.addMeet(7, 8);
    c.addMeet(8, 9);

    for (int i = 0; i < c.getPeopleCount() - 1; i++)
    {
        for (int j = i + 1; j < c.getPeopleCount(); j++)
        {
            int distance = c.findMinWayDFS(i, j);
            if (distance == 3)
            {
                cout << c.getPeopleName(i) << " friends with " << c.getPeopleName(j) << endl;
            }
        }
    }

    return 0;
}