#include <iostream>

using namespace std;

int main()
{

    string imie, pseudonim;
    cin >> imie >> pseudonim;

    //int ascii_pierwszej_imienia = int(imie[0]);

    for(int i=0; i<pseudonim.size(); i++)
    {
        if(int(pseudonim[i])==int(imie[0]))
        {
            if(pseudonim.size()-i>=imie.size())
            {
                cout << "TAK" << endl;
                break;
            }

        else
                cout << "NIE" << endl;
                break;
        }
    }

    return 0;
}
