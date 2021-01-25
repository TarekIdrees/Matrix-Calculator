#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;
template <class T>
class Matrix
{
    int row,col;
    T** Board;
public:

    Matrix<T>(int row,int col);
    Matrix<T> (const Matrix<T>&m);
    ~Matrix();
    Matrix<T> operator +(const Matrix<T>& m)const;
    Matrix<T> operator -(const Matrix<T>& m)const;
     Matrix<T>& operator =(const Matrix<T>& m);
     Matrix<T> operator *(const Matrix<T>& m);
    Matrix<T>& operator +=(const Matrix<T>& m);
    Matrix<T>& operator -=(const Matrix<T>& m);
    void Transprot();
    template <class T2>
     friend ostream& operator <<(ostream& out,const Matrix<T2>& m);
    template <class T2>
     friend istream& operator >> (istream& in,Matrix<T2>& m);
};


#endif // MATRIX_H
