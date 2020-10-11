#include <iostream>

using namespace std;

int main()

{
    int a;
    cin >> a;
    int typ = a, count = 0, maxx = 0;
    while (a)
    {
        if (typ == a)
            count++;
        else
        {
            typ = a;
            count = 1;
        }
        maxx = max(maxx, count);
        cin >> a;
    }
    cout << maxx;

}