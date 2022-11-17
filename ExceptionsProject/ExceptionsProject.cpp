#include <iostream>

using namespace std;

int CharFind(string str, char sym)
{
    int position{ -1 };
    for (int i = 0; i < str.length(); i++)
        if (str[i] == sym)
            return i;
    return position;
}

double IntDivide(int a, int b)
{
    if (b == 0)
        throw 0.0;

    return (double)a / b;
}

void Func4()
{
    cout << "Function 4 - start\n";

    cout << "Function 4 - throw exception\n";
    throw 1;

    cout << "Function 4 - finish\n";
}

void Func3()
{
    cout << "Function 3 - start\n";

    Func4();

    cout << "Function 3 - finish\n";
}

void Func2()
{
    cout << "Function 2 - start\n";
    try
    {
        Func3();
    }
    catch (int& e)
    {
        cout << "Function 2 catch exception\n";
        throw;
    }

    cout << "Function 2 - finish\n";
}

void Func1()
{
    cout << "Function 1 - start\n";

    try
    {
        Func2();
    }
    catch (int e)
    {
        cout << "Function 1 catch exception\n";
    }

    cout << "Function 1 - finish\n";
}


int main()
{
    /*bool flag;
    double result =  IntDivide(10, 0, flag);
    if (flag)
        cout << result;*/

    /*FILE* file;
    try
    {
        int n;
        cin >> n;
        
        file = fopen("file.dat", "w");

        double res = IntDivide(100, n);

        cout << "result = " << res << "\n";
        fclose(file);

    }
    catch(double e)
    {
        cout << "error! divid by zero!\n";
        fclose(file);
    }*/

    cout << "Main start\n";
    try
    {
        Func1();
    }
    catch (int e)
    {
        cout << "Main catch exception\n";
    }

    cout << "Main finish\n";
}
