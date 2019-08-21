#include <iostream>
#include <cstdlib>

using namespace std;

void PodzialTrojkatowZeWzgleduNaBoki(int A, int B, int C)
{
    if(A < C + B && C < A + B && B < A + C)
    {
       if(A==B && B==C && C==A)
        {
            cout << "TO TROJKAT ROWNOBOCZNY" << endl;
        }

        else if(A==B || A==C || B==C)
        {
            cout << "TO TROJKAT ROWNORAMIENNY" << endl;
        }

        else
            cout << "TO TROJKAT ROZNOBOCZNY" << endl;

    }

    else cout << "nie istnieje taki trojkat" << endl;


}
void PodzialTrojkatowZeWzgleduNaKaty(short a, short b, short x)
{
    if(a + b + x == 180)
    {
        if(a<90 && b<90 && x<90)
            cout << "TO TROJKAT OSTROKATNY" << endl;


        else if(a==90 || b==90 || x==90)
            {
                if(a==90 && !(b==90 || x==90))
                    cout << "TO TROJKAT PROSTOKATNY" << endl;

                else if(b==90 && !(a==90 || x==90))
                    cout << "TO TROJKAT PROSTOKATNY" << endl;

                else
                    cout << "TO TROJKAT PROSTOKATNY" << endl;
            }

        if(a>90 && a<=180 && !(b>=90 && b<=180 || x>=90 && x<=180))
            cout << "TO TROJKAT ROZWARTOKATNY" << endl;

        if(b>90 && b<=180 && !(a>=90 && a<=180 || x>=90 && x<=180))
            cout << "TO TROJKAT ROZWARTOKATNY" << endl;

        if(x>90 && x<=180 && !(b>=90 && b<=180 || a>=90 && a<=180))
            cout << "TO TROJKAT ROZWARTOKATNY" << endl;
    }

    else
        cout << "nie istnieje taki trojkat" << endl;

}


int main()
{
    short bokLubKat1, bokLubKat2, bokLubKat3;

    char wyborPodzialTrojkatow;

    char wyborTAlboN;

    cout << "Podzial Trojkatow Ze Wzgledu Na.... " << endl;
    cout << "b--> boki " <<"    "<< "k--> katy " << endl;
    cin >> wyborPodzialTrojkatow;
    cout << endl;




    if(wyborPodzialTrojkatow=='b' || wyborPodzialTrojkatow=='B')
    {
        while(true)
        {
            cout << "wybiez boki: " << endl;

            cout << "bok 1:";
            cin >> bokLubKat1;
            cout << "bok 2:";
            cin >> bokLubKat2;
            cout << "bok 3:";
            cin >> bokLubKat3;

            PodzialTrojkatowZeWzgleduNaBoki(bokLubKat1 ,bokLubKat2 ,bokLubKat3);

            cout << "czy chcesz zamknac program? T albo N :";
            cin >> wyborTAlboN;
            if(wyborTAlboN=='T' || wyborTAlboN=='t')
            {
                exit (0);
            }

        }

    }



    if(wyborPodzialTrojkatow=='k' || wyborPodzialTrojkatow=='K')
    {
        while(true)
        {
            cout << "wybiez katy: " << endl;

            cout << "kat 1:";
            cin >> bokLubKat1;
            cout << "kat 2:";
            cin >> bokLubKat2;
            cout << "kat 3:";
            cin >> bokLubKat3;

            PodzialTrojkatowZeWzgleduNaKaty(bokLubKat1, bokLubKat2, bokLubKat3);

            cout << "czy chcesz zamknac program? T albo N :";
            cin >> wyborTAlboN;
            if(wyborTAlboN=='T' || wyborTAlboN=='t')
            {
                exit (0);
            }
        }

    }


    return 0;
}
