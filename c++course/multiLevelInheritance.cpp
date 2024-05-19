#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void input_roll_no()
    {
        cout << "Enter the Roll Number : ";
        cin >> roll_no;
    }
    void output_roll_no()
    {
        cout << "\nRoll Number is : " << roll_no;
    }
};

class test : public Student
{
protected:
    int sub1_marks, sub2_marks;

public:
    void input_sub()
    {
        cout << "Enter sub 1 marks : ";
        cin >> sub1_marks;
        cout << "Enter sub 2 marks : ";
        cin >> sub2_marks;
    }
};

class Result : public test
{
public:
    int total;
    void calculate()
    {
        total = sub1_marks + sub2_marks;
    }
    void output()
    {
        calculate();
        output_roll_no();
        cout << "\nTotal Marks are : " << total << endl;
    }
};

int main()
{
    Result R;
    R.input_roll_no();
    R.input_sub();
    R.output();
    return 0;
}