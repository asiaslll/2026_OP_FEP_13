#include <stdio.h>
double f(double x){
   return 20.0*x+18.0;
}
double ans(){
   double l= -100.0,r= 100.0,eps=0.001,m;
   while((r-l)>=eps){
      m=(l+r)/2.0;
      if( f(l)*f(m) <0)r=m;
      else l=m;
   }
   return (l+r)/2.0;
}
int main() {
   
   printf("%.4f",ans());
   return 0;
}
