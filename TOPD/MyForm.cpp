#include "MyForm.h"
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing;


GraphicsPath^ GetFigurePath(RectangleF rect, float radius) {
	GraphicsPath^ path = gcnew GraphicsPath();
	path->StartFigure();
	path->AddArc(rect.X, rect.Y, radius, radius, 180, 90);
	path->AddArc(rect.Width - radius, rect.Y, radius, radius, 270, 90);
	path->AddArc(rect.Width - radius, rect.Height - radius, radius, radius, 0, 90);
	path->AddArc(rect.X, rect.Height - radius, radius, radius, 90, 90);
	path->CloseFigure();

	return path;
}

System::Void MakeFigureRounded()
{
	return System::Void();
}