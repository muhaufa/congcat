#include "Pocong.h"
#include <wx\wx.h>
Pocong::Pocong()
{
}
Pocong::Pocong(int x, int y, int width, int height)
	: x(x), y(y), width(width), height(height)
{
}
void Pocong::Draw(wxPaintDC &dc)
{
	dc.SetBrush(wxBrush(wxColour(*wxRED)));
	dc.SetPen(wxPen(wxColor(*wxGREEN), 1, wxPENSTYLE_SOLID));
	dc.DrawRectangle(wxPoint(this->x, this->y), wxSize(this->width,
		this->height));
}
void Pocong::Move()
{	
	if (this->y > 450)
		this->y -= 100;
	
	//if (y + height >= maxY || y <= 0) {
		//yDirection *= -1;
	//}
	//this->y += yDirection * yAmount;
}

void Pocong::Move2() {
	this->y += 100;
}