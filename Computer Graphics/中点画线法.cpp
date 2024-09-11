int x0,y0,x1,y1,color;
MidpointLine(x0,y0,x1,y1,color){
	int a,b,delta1,delta2,d,x,y;
	a=y0-y1;
	b=x1-x0;
	d=2*a+b;
	delta1=2*a;
	delta2=2*(a+b);
	x=x0;
	y=y0;
	drawpixel(x,y,color);
	while(x<x1)
	{
		if(d<0)
		{x++;
		 y++;
		 d+=delta2;
		}
		else
		{
			x++;
			d+=delta1;
		}
		drawpixel(x,y,color);
		
	}
}
