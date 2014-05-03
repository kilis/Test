#include <iostream>
#include <stdlib.h>
#include "intk.h" // apskata intiger tipu
#include "fact_int.h"
#include "power_int.h"
#include "stringk.h"
using namespace std;
int menu(){
    int input,input2,input3,input4,input5;
    int a,b,c;
sakums:
    cout<<"Ko darisiet ar mainigajiem a un b?\n";
    cout<<"1.Pats ievadisiet\n";
    cout<<"2.Uzgeneres dators ar jusu ievadito robezu\n";
    cout<<"3.Uzgeneres dators\n";
    cin>> input3;
    switch ( input3 ){
        case 1:
            cout<<"Vertiba a:\n";
            cin>> a;
            cout<<"Vertiba b:\n";
            cin>> b;
            break;
        case 2:
            cout<<"Max robezas veriba a:\n";
            cin>> c;
            a = rand() % c;
            b = rand() % c;
            break;
          case 3:
            a = rand() % 9999;
            b = rand() % 9999;
            cout<<"Vertiba a:\n";
            cout<<a<<endl;
            cout<<"Vertiba b:\n";
            cout<<b<<endl;
            break;

     }
sakums2:
    cout<<"Darbibas Intiger raditajiem\n";
    cout<<"1.Saskaitit\n";
    cout<<"2.Atnjemt\n";
    cout<<"3.Reizinat\n";
    cout<<"4.Dalit\n";
    cout<<"5.Kapinat\n";
    cout<<"6.Faktorials\n";
    cin>> input;
    switch ( input ){
    case 1:
       //saskaitit
       cout<<"Kada tipa skaitlus saskaitisiet?\n";
       cout<<"1. Int\n";
       cout<<"2. Int long\n";
       cout<<"3. Int long long\n";
       cout<<"4. Int Short\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<add0(a,b);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<add1(a,b);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<add2(a,b);
                break;
            case 4:
                cout<<"Vertiba ir:\n";
                cout<<add3(a,b);
                break;
        }
        break;
    case 2:
        //atnjemt
       cout<<"Kada tipa skaitlus atnemsiet?\n";
       cout<<"1. Int\n";
       cout<<"2. Int long\n";
       cout<<"3. Int long long\n";
       cout<<"4. Int Short\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<sub0(a,b);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<sub1(a,b);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<sub2(a,b);
                break;
            case 4:
                cout<<"Vertiba ir:\n";
                cout<<sub3(a,b);
                break;
        }
        break;
    case 3:
         //reizinat
       cout<<"Kada tipa skaitlus reizinat?\n";
       cout<<"1. Int\n";
       cout<<"2. Int long\n";
       cout<<"3. Int long long\n";
       cout<<"4. Int Short\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<mul0(a,b);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<mul1(a,b);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<mul2(a,b);
                break;
            case 4:
                cout<<"Vertiba ir:\n";
                cout<<mul3(a,b);
                break;
        }
        break;
    case 4:
         //dalit
       cout<<"Kada tipa skaitlus dalisiet?\n";
       cout<<"1. Float\n";
       cout<<"2. Double\n";
       cout<<"3. Long Double\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<div0(a,b);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<div1(a,b);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<div2(a,b);
                break;
        }
        break;
    case 5:
        //dalit
       cout<<"Baze:\n";
       cout<<a;
       cout<<"Eksponente:\n";
       cout<<b;
       cout<<"Kada tipa skaitlus kapinasiet?\n";
       cout<<"1. Float\n";
       cout<<"2. Double\n";
       cout<<"3. Long Double\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<power0(a,b);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<power1(a,b);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<power1(a,b);
                break;
        }
        break;
    case 6:
       cout<<"Skaitlis:\n";
       cout<<a;
       cout<<"Kada tipa skaitlus faktorizesiet?\n";
       cout<<"1. Int\n";
       cout<<"2. Unsigned Int\n";
       cout<<"3. Unsigned Long Int\n";
       cout<<"4. Unsigned Long Long Int\n";
       cin>> input2;
        switch ( input2 ){
            case 1:
                cout<<"Vertiba ir:\n";
                cout<<fact0(a);
                break;
            case 2:
                cout<<"Vertiba ir:\n";
                cout<<fact1(a);
                break;
            case 3:
                cout<<"Vertiba ir:\n";
                cout<<fact2(a);
                break;
            case 4:
                cout<<"Vertiba ir:\n";
                cout<<fact3(a);
                break;
        }
        break;
    default:            // Note the colon, not a semicolon
        cout<<"Nepareizi ievadits prasitias\n";
        break;
    }
        pbegas:
        cout<<""<<endl;
        cout<<"Vai turpinasiet?\n";
        cout<<"1.Ja\n";
        cout<<"2.Ne\n";
        cin>>input4;
        if (input4 == 1){
        cout<<"Jaunas vertibaas izveidosiet?\n";
        cout<<"1.Ja\n";
        cout<<"2.Ne\n";
        cin>>input5;
         if (input5 == 1) goto sakums;
        else if (input5 == 2) goto sakums2;
        else goto pbegas;
        }
beigas:
    cin.get();
}
int menu_string(){
    std::string a,b,c;
    int t;
        cout<<"Ievaidet tekstu a\n";
        cin>>a;
        cout<<"Ievaidet tekstu b\n";
        cin>>b;
        cout<<"Rezultats\n";
        cout<<strinkk(a,b);
        cout<<"\n";
        c = strinkk(a,b);
        cout<<"Ievadiet skaili kuru butrtu velaties redzet:\n";
        cin>>t;
        cout<<"Burts:\n";
        cout<<c[t];
beigas:
    cin.get();
}
