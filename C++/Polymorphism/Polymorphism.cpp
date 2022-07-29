#include <iostream>
using namespace std;
class circle
{
    float r, ans;

public:
    void area()
    {
        cout << "Enter radius";
        cin >> r;
        ans = 3.14 * r * r;
        cout << "Area of Circle=" << ans;
    }
};
class triangle
{
    float b, h, ans;

public:
    void area()
    {
        cout << "Enter Traingle Base";
        cin >> b;
        cout << "Enter tringle Height";
        cin >> h;
        ans = 0.5 * b * h;
        cout << "Area of Triangle =" << ans;
    }
};
class rectangle
{
    float b, h, ans;

public:
    void area()
    {
        cout << "Enter rectangle Base";
        cin >> b;
        cout << "Enter rectangle height";
        cin >> h;
        ans = b * h;
        cout << "Area of rectagle =" << ans;
    }
};
main()
{
    circle c;
    triangle t;
    rectangle r;

    int n;

    cout << "\nSelect Shape";
    cout << "\n1.Area of Circle";
    cout << "\n2.Area of Tringle ";
    cout << "\n3.Area of Rectangle";
    cout << "\n";
    cin >> n;
    switch (n)
    {
    case 1:
        c.area();
        break;
    case 2:
        t.area();
        break;
    case 3:
        r.area();
        break;
    default:
        cout << "\nInvaild input";
    }
}