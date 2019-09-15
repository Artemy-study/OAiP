//---------------------------------------------------------------------------
#include <math.h>
#include <iostream.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        double a, b, x, moreInformation, func, log1, result, cos1, step;
        int choose ;
        cout<<"write a "<<endl;
        cin>>a;
        cout<<"write b "<<endl;
        cin>>b;
        if (b < 1) x = b*b;
        else x = b + 1;
        cout<<"write number f(x):"<<endl;
        cout<<"0: 2x"<<endl;
        cout<<"1: x^2"<<endl;
        cout<<"2: x/3"<<endl;
        cin>>choose;
        switch(choose){
                case 0: func = 2*x; break;
                case 1: func = x*x; break;
                case 2: func = x/3; break;
        }
        step = pow(x, 0.2);
        log1 = a*log(1+ step);
        cos1 = pow(cos(func + 1), 2);
        result = log1 + cos1;
        cout<<"if you want more information write 1 "<<endl;
        cin>>moreInformation;
        if (moreInformation == 1){
                cout<<"x = " + FloatToStrF(x, ffGeneral, 4, 4)<<endl;
                cout<<"f(x) = " + FloatToStrF(func, ffGeneral, 4, 4)<<endl;
                cout<<"x^(0,2) = " + FloatToStrF(step, ffGeneral, 4, 4)<<endl;
                cout<<"(cos(f(x)+1))^2  = " + FloatToStrF(cos1, ffGeneral, 4, 4)<<endl;
                cout<<"a*ln(1+x^(0,2)) = " + FloatToStrF(log1, ffGeneral, 4, 4)<<endl;
                cout<<"Result = " + FloatToStrF(result, ffGeneral, 4, 4);
        }
        else cout<<"Result = " + FloatToStrF(result, ffGeneral, 4, 4);
        cin>>x;
        return 0;
}
//---------------------------------------------------------------------------
