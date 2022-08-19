/// << => Extraction => Printf => cout, >> => Insertion => Scanf => cin.

using namespace std;

#include<iostream>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 , Sum = 0;

    cout << endl << "\t Enter First Number => ";

    cin >> No1 ;

    cout << endl << "\t Enter Second Number => ";

    cin >> No2 ;

    Sum = No1 + No2;

    cout << endl << "\t Addition Of Given Number " << No1 << " & " << No2 << " Is = " << Sum ;

    getch();
    return 0;
}
