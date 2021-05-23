#include<iostream>
#include"CList.h"
#include"CNod.h"
#include <iostream>

int nr;
int main()
{
    CList List;
    int alegere, numar;

    do
    {
        cout << "1.Adaugare element" << endl;
        cout << "2.Stergere element " << endl;
        cout << "3.Media aritmetica a elementelor " << endl;
        cout << "4.Eliminare element cu valoare mai mica" << endl;
        cout << "5.Afisare lista" << endl;
        cout << "6.Exit" << endl;
        cout << endl;
        cout << "Introduceti alegerea dorita" << endl;
        cin >> alegere;
        cout << endl;

        switch (alegere)
        {
        case 1:
            cout << "Introduceti numarul de elemente: " << endl;
            cin >> numar;
            for (int i = 0; i < numar; i++)
            {
                cout << "Elementul este: ";
                cin >> nr;
                List.addElement(nr);
            }
            break;
        case 2:
            int nr;
            cout << "Elementul care trebuie sters este: ";
            cin >> nr;
            List.stergereElement(nr);
            break;
        case 3:
            cout << "Media aritmetica este: " << List.medie() << endl;
            break;
        case 4:
            cin >> nr;
            List.eliminare(nr);
            break;
        case 5:
            List.afisare();
            break;
        case 6: exit(1);
            break;
        }

    } while (1);
}