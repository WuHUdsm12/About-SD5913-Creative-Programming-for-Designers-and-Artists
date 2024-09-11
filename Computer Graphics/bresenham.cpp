Integer_Bresenham_Line(x0,y0,x1,y1,color)
int x0,y0,x1,x2,color;
{
	int x,y,dx,dy,e;
	dx=x1-x0;
	dy=y1-y0;
	e=-dx; x=x0;y=y0;
	for(i=0;i<=dx;i++
	{
		drawpixel(x,y,color);
		x=x+1;
		e=e+2*y;
		if(e>=0)
		{
			y=y+1;
			e=e-2*dx;
		}
	}
 } 
