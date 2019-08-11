#include <iostream>
#include <math.h>

using namespace std; //иначе для "cout" - "std::cout"."

int main()
{
    float a,b,c,s,p;
    cout << "Side of the triangle:" << endl;
    cin >> a >> b >> c;
    p = a + b + c;
    s = sqrt(p/2 * (p/2-a) * (p/2-b) * (p/2-c));
    cout << "Triangle perimeter:" << p << endl <<
            " Area of a triangle:" << s << endl;
    return 0;
}
