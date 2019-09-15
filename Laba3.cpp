//---------------------------------------------------------------------------
#include <math.h>
#include <iostream.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
       	double x, b, h, n, minusOne = 1, up, down, Sx, Yx, result;
	//x=0.1;
	//b=1;
	//h=0.1;
	//n=5;
        cout<<"write x "<<endl;
        cin>>x;
        cout<<"write b "<<endl;
        cin>>b;
        cout<<"write h "<<endl;
        cin>>h;
        cout<<"write n "<<endl;
        cin>>n;
	for (double i=x; i<b; i=i+h){
		for(int k=0; k<n; k++){
			  minusOne = minusOne * (-1);
			  up = pow(x, (2*k+1));
			  down = 1;
                          for(double g=1; g<2*k+1; g = g+1){
                                down = down * g;

                          }
			Sx = minusOne*up/down;
		}
                x=i;
                Yx = sin(x);
                result = fabs(Yx-Sx);
        }
        cout<<"result = "<<result;
        cin>>x;
        return 0;
}
//---------------------------------------------------------------------------
