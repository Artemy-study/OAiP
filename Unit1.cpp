//---------------------------------------------------------------------------
/*
При x = 14.26, y = -1.22, 
z = 3.5 10-2       :        0.564846.
*/
#include <vcl.h>
#include <jpeg.hpp>
#include <Math.hpp>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double x, y, z, result, p, sinus, scobes;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------



void __fastcall TForm1::ResultClick(TObject *Sender)
{

        x = X->Text.ToDouble();
        y = Y->Text.ToDouble();
        z = Z->Text.ToDouble();

        p = 2 * cos(x - 3.1415926/6);
        sinus = 0.5 + pow(sin(y), 2);
        scobes = 1+(z*z)/(3 - z*z/5);
        result = p/sinus*scobes;
        Form1->Result->Caption = result;
}
//---------------------------------------------------------------------------







