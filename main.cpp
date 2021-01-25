#include <iostream>
#include "Matrix.h"
using namespace std;
class MatrixCalculator
{
public:
    MatrixCalculator() {}
    void calculator()
    {
        int row1,coloumn1,row2,coloumn2;
        int choise;
        cout<<"\t\t\t\t\t |---------------------------------| \n";
        cout<<"\t\t\t\t\t |            Matrix               | \n";
        cout<<"\t\t\t\t\t |---------------------------------| \n";
        cout<<"\-----------------------------------------------| ";
        cout<<"\nFirst Matrix please enter the row and column :\n";
        cout<<"\-----------------------------------------------| \n";
        cin>>row1>>coloumn1;
        cout<<"\--------------------------------------| ";
        cout<<"\nFirst Matrix please enter the matrix :\n";
        cout<<"\--------------------------------------| \n";
        Matrix<int> m1(row1,coloumn1);
        cin>>m1;
        cout<<endl;

        cout<<"\-----------------------------------------------| ";
        cout<<"\nSecound Matrix please enter the row and column:\n";
        cout<<"\-----------------------------------------------| \n";
        cin>>row2>>coloumn2;
        cout<<"\----------------------------------------| ";
        cout<<"\nSecound Matrix please enter the matrix :\n";
        cout<<"\----------------------------------------| \n";
        Matrix<int> m2(row2,coloumn2);
        cin>>m2;
        cout<<endl;

        cout<<"\t\t\t\t*"<<"\t\t\t====Menu====\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t1.Addition\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t2.Subtraction\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t3.Multiplication\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t4.Transport\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t5.Exit\t\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t================\t\t"<<"*";
        cout<<"\n\t\t\t\t*********************************************************\n";
        bool a=true;
        while (a)
        {
            cout<<"\n---------------------------------------------------------------- \n";


            cout<<"PLease Enter Your Choice : ";
            cin>>choise;
            switch(choise)
            {
            case 1:
                cout<<"Addition is "<<endl;
                if(coloumn1!=coloumn2 || row1!=row2)
                {
                    cout<<"Mathematically not correct that  sum two matrix different in rows or columns !"<<endl;

                }
                else
                    cout<<m1+m2<<endl;
                continue;
            case 2:
                cout<<"subtraction is "<<endl;
                if(coloumn1!=coloumn2 || row1!=row2)
                {
                    cout<<"Mathematically not correct that  sub two matrix different in rows or columns !"<<endl;

                }
                else
                    cout<<m1-m2<<endl;
                continue;
            case 3:
                cout<<"Multiplication is "<<endl;
                if(coloumn1!=row2)
                {
                    cout<<"Mathematically not correct that  mult two matrix different in rows or columns !"<<endl;
                }
                else
                cout<<m1*m2<<endl;
                continue;
            case 4:
                cout<<"Transport of first matrix is :"<<endl;
                m1.Transprot();
                cout<<endl;
                cout<<"Transport of secound  matrix is :"<<endl;
                m2.Transprot();
                cout<<endl;
                continue;
            case 5:
                a=false;
            default :
                cout << "Invalid Enter" << endl;
                continue;
            }

        }

    }
};

int main()
{
    /*Matrix<int> m(3,3);
     cin>>m;
     Matrix<int> j(3,3);
     cin>>j;
     Matrix<int> k(3,3);
     k=m+=j;
     cout<<k;

     /*
     Matrix<int> m;
     cout<<m;
     */

    /* Matrix<int> m(3,3);
     Matrix<int> c(3,3);
     Matrix<int> d(3,3);
     cin>>m;
     c=m;
     d=c;
     cout<<d;*/

    /*Matrix<int> m(3,3);
    cin>>m;
    Matrix<int> c(m);
    cout<<c;*/


    /*Matrix<int> m(3,3);
    cin>>m;
    Matrix<int> c(3,3);
    cin>>c;
    Matrix<int> d(3,3);
    d=m-c;
    cout<<d<<endl;
    cout<<m-c;
    */

    /*Matrix<int> m(3,3);
    cin>>m;
    Matrix<int> c(3,3);
    cin>>c;
    Matrix<int> d(3,3);
    d=m*c;
    cout<<d<<endl;
    cout<<m*c;*/

    MatrixCalculator m;
    m.calculator();


    return 0;
}
