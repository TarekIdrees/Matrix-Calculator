#include "Matrix.h"
template <class T>
Matrix<T>::Matrix(int row,int col)
{
    this->row=row;
    this->col=col;
    this->Board=new T*[this->row];
    for(int i=0; i<row; i++)
    {
        this->Board[i]=new T[this->col];
    }
}
template <class T>
Matrix<T>::Matrix(const Matrix<T>&m)
{
    this->row=m.row;
    this->col=m.col;
    this->Board=new T*[this->row];
    for(int i=0; i<row; i++)
    {
        this->Board[i]=new T[this->col];
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            this->Board[i][j]=m.Board[i][j];
        }
    }
}
template <class T>
Matrix<T>::~Matrix()
{
    for(int i=0; i<row; i++)
    {
        delete[] this->Board[i];
    }
    delete [] this->Board;
}
template <class T>
Matrix<T>& Matrix<T> ::operator +=(const Matrix<T>& m)

{
    if(col!=m.col || row!=m.row)
    {
        cout<<"Mathematically not correct that  sum two matrix different in rows or columns !"<<endl;
    }
    else
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                this->Board[i][j]=this->Board[i][j]+m.Board[i][j];
            }
        }
    }
    return *this;
}
template <class T>
Matrix<T>& Matrix<T> :: operator -=(const Matrix<T>& m)
{
    if(col!=m.col || row!=m.row)
    {
        cout<<"Mathematically not correct that  sub two matrix different in rows or columns !"<<endl;
    }
    else
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                this->Board[i][j]=this->Board[i][j]-m.Board[i][j];
            }
        }
    }
    return *this;
}
template <class T>
Matrix<T>& Matrix<T> :: operator =(const Matrix<T>& m)
{
    if(row!=m.row && col!=m.col)
    {
        cout<<"They have different row and column !"<<endl;

    }
    else
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                this->Board[i][j]=m.Board[i][j];
            }
        }
        return *this;
    }

}
template <class T>
Matrix<T> Matrix<T> :: operator +(const Matrix<T>& m)const
{
        Matrix<int> c(this->row,this->col);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                c.Board[i][j]=this->Board[i][j]+m.Board[i][j];
            }
        }
        return c;

}
template <class T>
Matrix<T> Matrix<T> ::operator -(const Matrix<T>& m)const
{
        Matrix<int> c(this->row,this->col);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                c.Board[i][j]=this->Board[i][j]-m.Board[i][j];
            }
        }
        return c;
}
template <class T>
Matrix<T> Matrix<T> :: operator *(const Matrix<T>& m)
{
        Matrix<int> c(this->row,m.col);
        for(int i=0; i<c.row; i++)
        {
            for(int j=0; j<c.col; j++)
            {
                c.Board[i][j]=0;
                for(int d=0; d<this->col; d++)
                {
                    c.Board[i][j]+=this->Board[i][d]*m.Board[d][j];
                }
            }
        }
        return c;
}
template <class T>
void Matrix<T> :: Transprot()
{
        for(int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                cout<<this->Board[j][i]<<" | ";
            }
            cout<<endl;
        }
}
template <class T>
ostream& operator <<(ostream& out,const Matrix<T>& m)
{
    for(int i=0; i<m.row; i++)
    {
        for(int j=0; j<m.col; j++)
        {

            out<<m.Board[i][j]<<" | ";
        }
        out<<endl;
    }
    return out;
}


template <class T>
istream& operator >> (istream& in,Matrix<T>& m)
{
    for(int i=0; i<m.row; i++)
    {
        for(int j=0; j<m.col; j++)
        {
            in>>m.Board[i][j];
        }
    }
    return in;
}

template class Matrix<int>;
template ostream& operator << <int>(ostream& out,const Matrix<int>& m);
template istream& operator >> <int> (istream& in,Matrix<int>& m);

