//this is the header file g.h
#pragma once

#ifndef G_H
#define G_H

namespace A 
{
     class Gunc
     {
          private:
               int a,b;
          public:
               Gunc(int x, int y):a(x),b(y){};
               void substractNumbers();
     };
     
}
#endif // A