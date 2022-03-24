#include <stdio.h>
void input_line(float *x1, float *y1 ,float *x2, float *y2,float *x3, float *y3)
{
  printf("enter first points");
  scanf("%f %f",x1,y1);
  printf("enter second points");
  scanf("%f %f",x2,y2);
  printf("enter third points");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{ 
  float istriangle;
  istriangle=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  return istriangle;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if((istriangle) < 0.00001){
    printf("triangle not possible");
    }
    else if(istriangle!=0){
    printf("triangle is possible");
    }
  }
int main()
{
   float x1,y1,x2,y2,x3,y3,istriangle;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}