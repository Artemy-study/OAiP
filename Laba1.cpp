//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <Math.hpp>
#include <math.h>

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        double x, y, z, result, p, sinus, scobes;
        
        cout<<"write x,y,z"<<endl;
        cin>>x>>y>>z;
        p = 2 * cos(x - 3.1415926/6);
        sinus = 0.5 + pow(sin(y), 2);
        scobes = 1+(z*z)/(3 - z*z/5);
        result = p/sinus*scobes;
        result = SimpleRoundTo(result, -6);
        cout<<"Answer: "<<result;
        cin>>x;
        return 0;
}
//---------------------------------------------------------------------------
 