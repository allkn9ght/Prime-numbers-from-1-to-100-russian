#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int limit = 1000;
    int c = 0;
    int d;
    int lim_d;

    cout << "������ ������� ����� �� 0 �� " << limit << endl;

    for(int i=2;i<=limit;i++) {
        d = 2;
        lim_d = sqrt(i);
        while((i % d != 0) && (d <= lim_d))
            d++;
//        cout << d << "ddd" << i << "iii" << lim_d << "ldldld"; - �������
        if(d>lim_d) {
            c++;
            if(c > 12) {
                cout << "\n";
                c = 1;
            }
        cout << i << "\t";
        }

    }
     cout << "\n��� ������ ������� <Enter>.. ";
     fflush(stdin);
     cin.get();
     return 0;

}
