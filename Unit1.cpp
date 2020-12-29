//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Repaint();

	//Фон елки
	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Rectangle(100, 100, 500, 700);

	Canvas->Pen->Color = clBlack;
	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Rectangle(100, 350, 500, 700);

	Canvas->Pen->Color = clSkyBlue;
	Form1->Canvas->Brush->Color = clSkyBlue;
	Form1->Canvas->Rectangle(100, 400, 500, 700);

	Canvas->Pen->Color = clSilver;
	Form1->Canvas->Brush->Color = clSilver;
	Form1->Canvas->Rectangle(100, 600, 500, 700);

	//Ствол елки
	Canvas->Pen->Color = clMaroon;
	Form1->Canvas->Brush->Color = clMaroon;
	Form1->Canvas->Rectangle(285, 590, 315, 650);

	//Нижний треугольник
	TPoint points[3];
	points[0] = Point(300, 440);
	points[1] = Point(200, 590);
	points[2] = Point(400, 590);
	Canvas->Pen->Color = clGreen;
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(points, 2);

	//Средний треугольник
	points[0] = Point(300, 380);
	points[1] = Point(220, 490);
	points[2] = Point(380, 490);
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(points, 2);

	//Верхний треугольник
	points[0] = Point(300, 320);
	points[1] = Point(250, 410);
	points[2] = Point(350, 410);
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(points, 2);

	//Шарики верх
	Canvas->Pen->Color = clRed;
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(290, 350, 305, 365);

	Canvas->Pen->Color = clYellow;
	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Ellipse(270, 380, 285, 395);

	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(310, 380, 325, 395);

	//Шарики середина
	Canvas->Pen->Color = clYellow;
	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Ellipse(290, 420, 305, 435);

	Canvas->Pen->Color = clRed;
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(250, 460, 265, 475);

	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(330, 460, 345, 475);

	Canvas->Pen->Color = clLime;
	Form1->Canvas->Brush->Color = clLime;
	Form1->Canvas->Ellipse(290, 460, 305, 475);

	//Шарики низ
	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(290, 500, 305, 515);

	Canvas->Pen->Color = clLime;
	Form1->Canvas->Brush->Color = clLime;
	Form1->Canvas->Ellipse(265, 530, 280, 545);

	Canvas->Pen->Color = clRed;
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(315, 530, 330, 545);

	Canvas->Pen->Color = clRed;
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(240, 565, 255, 580);

	Canvas->Pen->Color = clBlue;
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(340, 565, 355, 580);

	Canvas->Pen->Color = clYellow;
	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Ellipse(290, 565, 305, 580);

	for (int i = 0; i < 100; i++) {
		int x, y;
		x = 100 + rand() % 400;
		y = 100 + rand() % 600;
		Canvas->Pen->Color = clWhite;
		Form1->Canvas->Brush->Color = clWhite;
		Form1->Canvas->Ellipse(x, y, x + 5, y + 5);
	}
	Canvas->Brush->Style=bsClear;
	Canvas->Font->Color=clWhite;
	Canvas->Font->Name="Comic Sans MS";
	Canvas->Font->Size=35;
	Canvas->TextOut(120,200,"С Новым Годом");
}
//---------------------------------------------------------------------------
