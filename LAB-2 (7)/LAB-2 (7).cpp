#include "LAB-2 (7).h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Triangle(0, 0, Color::black, 5, 8, 6));
    shapes.push_back(new Triangle(1, 1, Color::pink, 2, 3, 4));
    shapes.push_back(new Rectangle(6, 0, Color::white, 1, 1));
    shapes.push_back(new Circle(3, 4, Color::pink, 7));
    shapes.push_back(new Rectangle(5, 5, Color::black, 3, 2));

    for (Shape* shape : shapes)
    {
        cout << shape->square() << endl;
    }

    return 0;
}
