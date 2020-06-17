#include<iostream>
using namespace std;

char Tabla[7][13];
char caracter='X';
int numar;
bool conditie=true;
int contor=0;
bool raspuns;

/*
+-----------+
| 1 | 2 | 0 |
|---+---+---|
| 4 | X | 6 |
|---+---+---|
| 7 | 8 | 9 |
+-----------+
*/

char CreazaTabla()
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<13;j++)
        {
            Tabla[i][j]=' ';
        }
    }



    Tabla[0][0]='+';
    Tabla[0][12]='+';
    Tabla[6][0]='+';
    Tabla[6][12]='+';



    for(int i=1;i<=11;i++)
    {
        Tabla[0][i]='-';
    }
    for(int i=1;i<=11;i++)
    {
        Tabla[6][i]='-';
    }
    for(int i=1;i<=11;i++)
    {
        Tabla[2][i]='-';
    }
    for(int i=1;i<=11;i++)
    {
        Tabla[4][i]='-';
    }



    for(int i=1;i<=5;i++)
    {
        Tabla[i][0]='|';
    }
    for(int i=1;i<=5;i++)
    {
        Tabla[i][4]='|';
    }
    for(int i=1;i<=5;i++)
    {
        Tabla[i][8]='|';
    }
    for(int i=1;i<=5;i++)
    {
        Tabla[i][12]='|';
    }



    Tabla[2][4]='+';
    Tabla[2][8]='+';
    Tabla[4][4]='+';
    Tabla[4][8]='+';




    Tabla[1][2]='1';
    Tabla[1][6]='2';
    Tabla[1][10]='3';
    Tabla[3][2]='4';
    Tabla[3][6]='5';
    Tabla[3][10]='6';
    Tabla[5][2]='7';
    Tabla[5][6]='8';
    Tabla[5][10]='9';
}



char ArataTabla()
{
    for(int i=0;i<7;i++)
    {
        for (int j=0;j<13;j++)
        {
            cout<<Tabla[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
}



int Schimba()
{
    cout<<"Alege casuta : ";cin>>numar;
    cout<<"\n";
        switch(numar)
        {
        case 1:
            if(Tabla[1][2]=='X' || Tabla[1][2]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[1][2]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 2:
            if(Tabla[1][6]=='X' || Tabla[1][6]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[1][6]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 3:
            if(Tabla[1][10]=='X' || Tabla[1][10]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[1][10]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 4:
            if(Tabla[3][2]=='X' || Tabla[3][2]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[3][2]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 5:
            if(Tabla[3][6]=='X' || Tabla[3][6]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[3][6]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 6:
            if(Tabla[3][10]=='X' || Tabla[3][10]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[3][10]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 7:
            if(Tabla[5][2]=='X' || Tabla[5][2]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[5][2]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 8:
            if(Tabla[5][6]=='X' || Tabla[5][6]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[5][6]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        case 9:
            if(Tabla[5][10]=='X' || Tabla[5][10]=='0'){cout<<"Casuta este deja ocupata !"<<endl;break;}
            else
            {Tabla[5][10]=caracter;
            if(caracter=='X'){caracter='0';}
            else{caracter='X';}
            break;}
        default:
            cout<<"Eroare"<<endl;
            break;
        }
}



char Conditii()
{
    if(Tabla[1][2]==Tabla[1][6] && Tabla[1][6]==Tabla[1][10])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[3][2]==Tabla[3][6] && Tabla[3][6]==Tabla[3][10])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[5][2]==Tabla[5][6] && Tabla[5][6]==Tabla[5][10])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[1][2]==Tabla[3][2] && Tabla[3][2]==Tabla[5][2])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[1][6]==Tabla[3][6] && Tabla[3][6]==Tabla[5][6])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[1][10]==Tabla[3][10] && Tabla[3][10]==Tabla[5][10])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[1][2]==Tabla[3][6] && Tabla[3][6]==Tabla[5][10])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
    if(Tabla[1][10]==Tabla[3][6] && Tabla[3][6]==Tabla[5][2])
    {
        cout<<"Castiga "<<caracter<<"!"<<endl;
        conditie=false;
    }
}


int Mecanism()
{
    while(conditie)
    {
        if(contor>=9){cout<<"Egalitate"<<endl;break;}
        ArataTabla();
        Schimba();
        Conditii();
        contor++;
    }
    ArataTabla();
}



int main()
{
    CreazaTabla();
    Mecanism();
    cout<<"Play again ?(0=nu ,1=da)"<<endl;
    cout<<"Raspuns = ";cin>>raspuns;
    cout<<"\n";
    while(raspuns)
    {
    conditie=true;
    contor=0;
    caracter='X';
    CreazaTabla();
    Mecanism();
    cout<<"Play again ?(0=nu ,1=da)"<<endl;
    cout<<"Raspuns = ";cin>>raspuns;
    cout<<"\n";
    }
    return 0;
}

















