#include <iostream>

using namespace std;

class Figure
{
protected:
            int a,b;
public:
            Figure(int d_a, int d_b) : a(d_a), b(d_b) {}
            virtual void Area() = 0;
};

class Triangle : public Figure
{
public:
    Triangle(int d_a, int d_b) : Figure(d_a, d_b) {}
    void Area()
    {
        cout << "Triangle: " << a*b*1/2 << endl;
    }
};

class Rectangle : public Figure
{
public:
        Rectangle(int d_a, int d_b) : Figure(d_a, d_b) {}
        void Area()
        {
            cout << "Rectangle: " << a*b << endl;
        }
};

int main()
{
    Figure *p;
    Triangle t(2,3);
    Rectangle r(2,3);

    p = &t;
    p->Area();
    p = &r;
    p->Area();

    return 0;
}
