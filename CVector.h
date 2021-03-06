//
//  CVector.h
//  CVector
//
//  Created by Вася Суржан on 18.05.2022.
//

#ifndef CVector_h
#define CVector_h

#include <iostream>
#include <fstream>
#include <cassert>
#include <stdlib.h>
#include <string>

using namespace std;



class CVector {
    
protected:
    int t;

public:
    double *coords;
    
    CVector();

    CVector(int size);

    CVector(int size, const char* f);

    CVector(const CVector &x);

    CVector &operator=(const CVector &x);

    double & operator[](int i);
    
    int size() const
    {
        return t;
    }

    const double & operator[](int i)const;

    CVector &operator+=(const CVector &x);

    CVector &operator-=(const CVector &x);

    virtual int output(const char *f = NULL)=0;

    ~CVector();

    friend ostream &operator<<(ostream &out, const CVector &x);   
};

ostream &operator<<(ostream &out, const CVector &x);

#endif /* CVector_h */
