DDAline(x0,y0,x1,y1,color)
int x0,y0,x1,y1,color;
{
 int x;
 float dx,dy,k,y;
 dx=x1-x0;
 dy=y1-y0;
 k=dy/dx;
 y=y0;
 for(x=x0;x<=x1;x++)
 {
 	drawpixel(x,int(y+0.5,color);
 	y=y+k;
 }
 } 
