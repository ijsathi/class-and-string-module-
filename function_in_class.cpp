#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks_1;
    int marks_2;
    Person(string nm, int ag, int mk1, int mk2)
    {
        name = nm;
        age = ag;
        marks_1 = mk1;
        marks_2 = mk2;
    }
    void hello()
    {
        cout << marks_1;
    }
};
int main()
{
    Person man("Rahim", 18, 70, 40);
    cout << man.name << endl;
    man.hello();
    return 0;
}