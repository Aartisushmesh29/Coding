#include <bits/stdc++.h>
using namespace std;

class shape
{
    int width, height;

public:
    void input()
    {
        cout << "Enter the width : ";
        cin >> width;
        cout << "\nEnter the height : ";
        cin >> height;
    }
    void output()
    {
        cout << "Width is : " << width << endl;
        cout << "Height is : " << height << endl;
    }
    int return_w()
    {
        return width;
    }
    int return_h()
    {
        return height;
    }
};
class Rectangle : public shape
{
public:
    int Area()
    {
        int w, h;
        w = return_w();
        h = return_h();

        return w * h;
    }
};

int main()
{
    Rectangle R;
    R.input();
    R.output();

    int area = R.Area();
    cout << "Area of the Reactangle is : " << area;
    return 0;
}