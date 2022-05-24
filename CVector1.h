//
//  CVector1.h
//  CVector
//
//  Created by Вася Суржан on 18.05.2022.
//

#ifndef CVector1_h
#define CVector1_h

#include "CVector.h"

class CVector1: public CVector
{
public:

    CVector1();
    
    CVector1(int size) : CVector (size){};
    
    CVector1(char* str);
    
    CVector1(const CVector &x) : CVector(x){};
    
    using CVector :: operator=;

    int output(const char *f = NULL);
};


#endif /* CVector1_h */
