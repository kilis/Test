#include <iostream>
#include "intk.h" // apskata intiger tipu
#include "fact_int.h"
#include "power_int.h"
#include "menu_input.h"
int main()
{
    using namespace std;
    int f;
    cout << "Autors: Kristaps Stalidzans RTU Students 1.Kurss 1.Grupa"<<endl;
    cout << "Char izmers C++ ir " << sizeof(char) <<" baiti"<<endl;
    cout << "Unsigned Char izmers C++ ir " << sizeof(unsigned char) <<" baiti"<<endl;
    cout << "Int izmers C++ ir " << sizeof(int) <<" baiti"<< endl;
    cout << "Float izmers C++ ir " << sizeof(float) <<" baiti"<<endl;
    cout << "Short int izmers C++ ir " << sizeof(short int)<<" baiti"<< endl;
    cout << "Unsigned Short int izmers C++ ir " << sizeof(unsigned short int)<<" baiti"<< endl;
    cout << "Unsigned Long int izmers C++ ir " << sizeof(unsigned long int) <<" baiti"<<endl;
    cout << "Long int izmers C++ ir " << sizeof(long int) <<" baiti"<<endl;
    cout << "Long Long int izmers C++ ir " << sizeof(long long int) <<" baiti"<<endl;
    cout << "Unsigned Long Long int izmers C++ ir " << sizeof(unsigned long long int) <<" baiti"<<endl;
    cout << "Double izmers C++ ir " << sizeof(double) <<" baiti"<<endl;
    cout << "Long double izmers C++ ir " << sizeof(long double) <<" baiti"<<endl;
    cout << "Wchar_t izmers C++ ir " << sizeof(wchar_t) <<" baiti"<<endl;
    sakums:
    cout<<"Kadas drabibas veiksiet?\n";
    cout<<"1.Intiger\n";
    cout<<"2.String\n";
    cin>>f;
    switch (f){
    case 1:
        menu();
        break;
    case 2:
        menu_string();
        break;
    default:
        cout<<"Kluda\n";
        goto sakums;
        break;
    }
    cout<<"Vai turpinasiet?\n";
    cout<<"1.Ja\n";
    cout<<"2.Ne\n";
    cin>>f;
    if (f==1) goto sakums;
    else if (f==2) goto beigas;
    else {
            cout<<"Kluda\n";
            goto beigas;
    }
    beigas:
        cin.get();
   return 0;
}

