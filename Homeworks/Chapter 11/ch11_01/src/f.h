//this is the header file f.h
#pragma once

#ifndef F_H
#define F_H

namespace A 
{
     class Func
     {
          private:
               int x,y;
          public:
               Func(int a, int b):x(a),y(b){};
               void AddNumbers();
     };
     
}
#endif // A