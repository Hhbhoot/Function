#include <iostream>
using namespace std;
class time
{

    int h, m;

public:
    void setdata()
    {
        cout << "Enter hours :" << endl;
        cin >> h;

        cout << "Enter minutes :" << endl;
        cin >> m;
    }

    void getdata()
    {
        cout << "Total time :" << h << " hour " << m << " min" << endl;
    }

    friend time add(time, time);
};

time add(time t1, time t2)
{
    time t;

    t.h = (t1.m + t2.m) / 60;
    t.m = (t1.m + t2.m) % 60;

    t.h = t.h + t1.h + t2.h;
    t.m = t.m;

    return t;
}
int main()
{
    time t1, t2, t3;

    t1.setdata();
    // t1.getdata();

    t2.setdata();
    // t2.getdata();

    t3 = add(t1, t2);
    t3.getdata();
}
