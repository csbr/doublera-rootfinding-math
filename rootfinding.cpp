/* 
 * File:   EquationSolver main.cpp
 * Author: Ravi Prakash Singh
 *
 */

#include<iostream>
#include<cmath>
#define PI M_PI
using namespace std;

/*
 * 
 */
float real,complex;
float rtcomp(float/*real part*/,float/*complex part*/,int/*order*/,int/*nth root*/);
void findrootcomplexquadratic(void);
void findrootcomplexcubic(void);
//this function is used to frame a cubic equation from the roots
void frameequationcube(void);
void inputcube(void);
float cube(float,float,float);
float cuberootR[3][2];
//this function is used to find the solution of a cubic equation
float cuberoot(float,float,float,float);
//this function is used to frame a quartic equation from the roots
void frameequationquartic(void);
void inputquartic(void);
float quartic(float,float,float,float);
float quarticroot1r,quarticroot2r,quarticroot3r,quarticroot4r,/*the real part of three cube roots*/ quarticroot1c,quarticroot2c,quarticroot3c,quarticroot4c /*the complex part of three cube roots*/;
//this function is used to find the solution of a quartic equation
float quarticroot(float,float,float,float,float);
void frameequationquintic(void);
void inputquintic(void);
float quintic(float,float,float,float,float);
float quinticroot1r,quinticroot2r,quinticroot3r,quinticroot4r,quinticroot5r,/*the real part of three cube roots*/ quinticroot1c,quinticroot2c,quinticroot3c,quinticroot4c,quinticroot5c /*the complex part of three cube roots*/;
//this function is used to find the solution of a quartic equation
float q5root[5][2];
float quinticroot(float,float,float,float,float,float);
float con,x1,x2,x3,x4,x5,r1,r2,r3,r4,r5;

int main(void)
{
     int choice;
     char choicemain='y';
    while (choicemain=='y')
    {
          cout<<"\n====================================================";
          cout<<"\nMain menu";
    cout<<"\n1. Frame an equation in cubic.";
    cout<<"\n2. Find roots for cubic.";
    cout<<"\n3. Frame an equation in biquadratic.";
    cout<<"\n4. Find roots for biquadratic.";
    cout<<"\n5. Frame an equation in quintic.";
    cout<<"\n6. Find roots for quintic.";
    cout<<"\n7. Find quadratic root of complex number.";
    cout<<"\n8. Find cubic root of complex number.";
    
    cout<<"\nAny other to exit.";
    cout<<"\nEnter choice (1/2/3/4/5/6/7/8/number):";
    cin>>choice;
    switch(choice)
    {
                  case 1: cout<<"\nEnter the roots of the cubic equation.";
                  frameequationcube();
                  break;
                  case 2: cout<<"\nInput the constants of the cubic equation.\n ";
                  inputcube();
                  break;
                  case 3: cout<<"\nEnter the roots of the quartic (biquadratic) equation.";
                  frameequationquartic();
                  break;
                  case 4: cout<<"\nInput the constants of the quartic equation.\n ";
                  inputquartic();
                  break;
                  case 5: cout<<"\nEnter the roots of the quintic equation.";
                  frameequationquintic();
                  break;
                  case 6: cout<<"\nInput the constants of the quintic equation.\n ";
                  inputquintic();
                  break;
                  case 7:cout<<"\n";
                  findrootcomplexquadratic();
                  break;
                  case 8:cout<<"\n";
                  findrootcomplexcubic();
                  break;
                  default: ;
                  }
    cout<<"\n======================================================";
    cout<<"\nWant to do more in main menu(y/n):";
    cin>>choicemain;
    }
    return 0;
}
void findrootcomplexquadratic(void)
{
    char ch='y';
    while (ch=='y')
    {
     float a,b;
     cout<<"\nEnter real: ";
    cin>>a;
    cout<<"\nEnter complex: ";
    cin>>b;
    rtcomp(a,b,1,2);
    cout<<real<<" + i "<<complex;
    rtcomp(a,b,2,2);
    cout<<"\n"<<real<<" + i "<<complex;
    cout<<"\nWant to do more (y/n): ";
    cin>>ch;
}    
}
void findrootcomplexcubic(void)
{
    char ch='y';
    while (ch=='y')
    {
     float a,b;
     cout<<"\nEnter real: ";
    cin>>a;
    cout<<"\nEnter complex: ";
    cin>>b;
    rtcomp(a,b,1,3);
    cout<<real<<" + i "<<complex;
    rtcomp(a,b,2,3);
    cout<<"\n"<<real<<" + i "<<complex;
    rtcomp(a,b,3,3);
    cout<<"\n"<<real<<" + i "<<complex;
    cout<<"\nWant to do more (y/n): ";
    cin>>ch;
}
}    
    
void inputcube(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter coeff. of x^3: ";
    cin>>x3;
    cout<<"\nEnter coeff. of x^2: ";
    cin>>x2;
    cout<<"\nEnter coeff. of x: ";
    cin>>x1;
    cout<<"\nEnter constant: ";
    cin>>con;
    cuberoot(x3,x2,x1,con);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}
void inputquartic(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter coeff. of x^4: ";
    cin>>x4;
    cout<<"\nEnter coeff. of x^3: ";
    cin>>x3;
    cout<<"\nEnter coeff. of x^2: ";
    cin>>x2;
    cout<<"\nEnter coeff. of x: ";
    cin>>x1;
    cout<<"\nEnter constant: ";
    cin>>con;
    quarticroot(x4,x3,x2,x1,con);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}
void inputquintic(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter coeff. of x^5: ";
    cin>>x5;
    cout<<"\nEnter coeff. of x^4: ";
    cin>>x4;
    cout<<"\nEnter coeff. of x^3: ";
    cin>>x3;
    cout<<"\nEnter coeff. of x^2: ";
    cin>>x2;
    cout<<"\nEnter coeff. of x: ";
    cin>>x1;
    cout<<"\nEnter constant: ";
    cin>>con;
    quinticroot(x5,x4,x3,x2,x1,con);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}

void frameequationcube(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter root 1: ";
    cin>>x3;
    cout<<"\nEnter root 2: ";
    cin>>x2;
    cout<<"\nEnter root 3: ";
    cin>>x1;
    cube(x3,x2,x1);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}
void frameequationquartic(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter root 1: ";
    cin>>x4;
    cout<<"\nEnter root 2: ";
    cin>>x3;
    cout<<"\nEnter root 3: ";
    cin>>x2;
    cout<<"\nEnter root 4: ";
    cin>>x1;
    quartic(x4,x3,x2,x1);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}
void frameequationquintic(void)
{
    char ch='y';
    while (ch=='y')
    {
    cout<<"\nEnter root 1: ";
    cin>>x5;
    cout<<"\nEnter root 2: ";
    cin>>x4;
    cout<<"\nEnter root 3: ";
    cin>>x3;
    cout<<"\nEnter root 4: ";
    cin>>x2;
    cout<<"\nEnter root 5: ";
    cin>>x1;
    quintic(x5,x4,x3,x2,x1);
    cout<<"\n";
    cout<<"Want to do more (y/n): ";
    cin>>ch;
}
}

float cube(float a,float b,float c)
{
      float sum,prod2,prod3;
      sum = a+b+c;
      if (sum<0)
      {
                cout<<"\nThe equation is: x^3+"<<abs(sum);
                }
                else
                {
                    cout<<"The equation is: x^3-"<<abs(sum);
                    };
      prod2 = a*b + b*c + c*a;
      if (prod2<0)
      {
                cout<<"x^2-"<<abs(prod2);
                }
                else
                {
                    cout<<"x^2+"<<abs(prod2);
                    };
      prod3 = a*b*c;
      if (prod3<0)
      {
                cout<<"x+"<<abs(prod3);
                }
                else
                {
                    cout<<"x-"<<abs(prod3);
                    };
      return 0;      
};
float cuberoot(float a, float b,float c,float d)
{
      float p=0,q=0,r=0,r2=0,r3=0,root1=0,root2=0,root3=0,subroot1=0,x=0,y=0;
      float crcons=0,cri=0,crcons2=0,cri2=0,crcons3=0,cri3=0,crconsb=0,crib=0;
      float crcons2b=0,cri2b=0,crcons3b=0,cri3b=0,crsq=0,crconsa=0,cria=0, crconsba=0, criba=0;
      int flag=0;
      if (b<0)
      {
                cout<<"\nThe equation is:"<<a<<"x^3-"<<abs(b);
                }
                else
                {
                    cout<<"The equation is:"<<a<<"x^3+"<<abs(b);
                    };
      if (c<0)
      {
                cout<<"x^2-"<<abs(c);
                }
                else
                {
                    cout<<"x^2+"<<abs(c);
                    };
      if (d<0)
      {
                cout<<"x-"<<abs(d);
                }
                else
                {
                    cout<<"x+"<<abs(d);
                    };
      
      cout<<"\n=================================\n";
      cout<<"\nThe reduced equation is ";
      p = ((3*a*c - b*b)/3*a*a);
      if (p<0)
      {
                cout<<"\ny^3-("<<abs(p);
                }
                else
                {
                    cout<<"y^3+("<<abs(p);
                    };
      
      q = ((2*b*b*b + 27*a*a*d - 9*a*b*c)/(27*a*a*a));
      if (q<0)
      {
                cout<<")y-("<<abs(q)<<")";
                }
                else
                {
                    cout<<")y+("<<abs(q)<<")";
                    };
      cout<<"\n===================================\n";              
      r = pow((q/2),2)+ pow((p/3),3);
      if(r<0)
             {                    
              
              if(-q<0)
              {
                      crcons = q/2;
                      flag=1;
                      }
                      else
                      {
                          crcons = -q/2;
                          }
              cri = sqrt(-r);
              crsq = sqrt(pow(crcons,2)+pow(cri,2));
             
              crcons = crcons/crsq;
              cri = cri/crsq;
             
              crconsa = acos(crcons);
              cria = asin(cri);
              
              if(flag==1)
              {
                         crsq = cbrt(-crsq);
                         }
              else
              {
                  crsq = cbrt(crsq);
                  }
              crcons = crsq*cos(cria/3);
              cri = crsq*sin(cria/3);
              crconsb = crsq*cos(cria/3);
              crib = -crsq*sin(cria/3);
              cuberootR[0][0]=(-b/(3*a)) + crcons+crconsb;
              cuberootR[0][1]=cri+crib;
              cout<<"\nThe root1 is :"<<cuberootR[0][0]<<" + i "<<cuberootR[0][1];
             
              crcons2 = -.5*crcons - cri*sqrt(3)/2;
              cri2 = crcons*sqrt(3)/2 - cri/2;
             
              crcons2b = -.5*crconsb + crib*sqrt(3)/2;
              cri2b = -crconsb*sqrt(3)/2 - crib/2;
              cuberootR[1][0]=(-b/(3*a)) + crcons2+crcons2b;
              cuberootR[1][1]=cri2+cri2b;
              cout<<"\nThe root2 is :"<<cuberootR[1][0]<<" + i "<<cuberootR[1][1];
             
              crcons3 = -.5*crcons + cri*sqrt(3)/2;
              cri3 = -crcons*sqrt(3)/2 - cri/2;
             
              crcons3b = -.5*crconsb - crib*sqrt(3)/2;
              cri3b = crconsb*sqrt(3)/2 - crib/2;
              cuberootR[2][0]=(-b/(3*a)) + crcons3+crcons3b;
              cuberootR[2][1]=cri3+cri3b;
              cout<<"\nThe root3 is :"<<cuberootR[2][0]<<" + i "<<cuberootR[2][1];
              
             
      }

              else
              {
              r2 = cbrt((-q/2)+ sqrt(r));
              r3 = cbrt((-q/2)- sqrt(r));
              
              crcons = r2;
              crconsb = r3;
              cuberootR[0][0]=(-b/(3*a)) + crcons+crconsb;
              cuberootR[0][1]=cri+crib;
              cout<<"\nThe root1 is :"<<cuberootR[0][0]<<" + i "<<cuberootR[0][1];
              
              crcons2 = -.5*crcons;
              cri2 = crcons*sqrt(3)/2;
              
              crcons2b = -.5*crconsb;
              cri2b = -crconsb*sqrt(3)/2;
              cuberootR[1][0]=(-b/(3*a)) + crcons2+crcons2b;
              cuberootR[1][1]=cri2+cri2b;
              cout<<"\nThe root2 is :"<<cuberootR[1][0]<<" + i "<<cuberootR[1][1];
              
              crcons3 = -.5*crcons;
              cri3 = -crcons*sqrt(3)/2;
              
              crcons3b = -.5*crconsb;
              cri3b = crconsb*sqrt(3)/2;
              cuberootR[2][0]=(-b/(3*a)) + crcons3+crcons3b;
              cuberootR[2][1]=cri3+cri3b;
              cout<<"\nThe root3 is :"<<cuberootR[2][0]<<" + i "<<cuberootR[2][1];
              
              };
              cout<<"\n==========================\n";
              
              return 0;
};
float quartic(float a,float b,float c,float d)
{
      float sum,prod2,prod3,prod4;
      sum = a+b+c+d;
      if (sum<0)
      {
                cout<<"\nThe equation is: x^4+"<<abs(sum);
                }
                else
                {
                    cout<<"The equation is: x^4-"<<abs(sum);
                    };
      prod2 = a*b + a*c + a*d + b*c + b*d + c*d;
      if (prod2<0)
      {
                cout<<"x^3-"<<abs(prod2);
                }
                else
                {
                    cout<<"x^3+"<<abs(prod2);
                    };
      prod3 = a*b*c + a*b*d + a*c*d + b*c*d;
      if (prod3<0)
      {
                cout<<"x^2+"<<abs(prod3);
                }
                else
                {
                    cout<<"x^2-"<<abs(prod3);
                    };
      prod4 = a*b*c*d;
      if (prod4<0)
      {
                cout<<"x-"<<abs(prod4);
                }
                else
                {
                    cout<<"x+"<<abs(prod4);
                    };
      
      return 0;      
};
float quarticroot(float a,float b,float c, float d,float e)
{
     float p,q,r;
     float rq41r,rq41c,rq42r,rq42c,rq43r,rq43c;
     
     if (b<0)
      {
                cout<<"\nThe equation is:"<<a<<"x^4-"<<abs(b);
                }
                else
                {
                    cout<<"The equation is:"<<a<<"x^4+"<<abs(b);
                    };
      if (c<0)
      {
                cout<<"x^3-"<<abs(c);
                }
                else
                {
                    cout<<"x^3+"<<abs(c);
                    };
      if (d<0)
      {
                cout<<"x^2-"<<abs(d);
                }
                else
                {
                    cout<<"x^2+"<<abs(d);
                    };
      if (e<0)
      {
                cout<<"x-"<<abs(e);
                }
                else
                {
                    cout<<"x+"<<abs(e);
                    };
      
     cout<<"\n=================================\n";
      cout<<"\nThe reduced equation is ";
      p = ((8*a*c - 3*b*b)/8*a*a);
      if (p<0)
      {
                cout<<"\ny^4-("<<abs(p);
                }
                else
                {
                    cout<<"y^4+("<<abs(p);
                    };
      
      q = ((2*b*b*b + 16*a*a*d - 8*a*b*c)/(16*a*a*a));
      if (q<0)
      {
                cout<<")y^2-("<<abs(q);
                }
                else
                {
                    cout<<")y^2+("<<abs(q);
                    };
      r = ((16*a*b*b*c -3*b*b*b*b - 64*a*a*b*d + 256*e*a*a*a)/(256*a*a*a*a));
      if (r<0)
      {
                cout<<")y-("<<abs(q)<<")";
                }
                else
                {
                    cout<<")y+("<<abs(q)<<")";
                    };
      
      cout<<"\n===================================\n";              
      cout<<"\nEntering cuberoot.";
      cuberoot(1,p/2,(p*p-4*r)/16,-(q*q)/64);
      cout<<"\nExiting cuberoot.";
      cout<<"\nEntering quarticroot.";
      
               rtcomp(cuberootR[0][0],cuberootR[0][1],1,2);        
               rq41r= real;        
               rq41c= complex;
               if((rq41r<=0)&&(cuberootR[0][0]>0))
               {
               rtcomp(cuberootR[0][0],cuberootR[0][1],2,2);        
               rq41r= real;        
               rq41c= complex;
               }
               rtcomp(cuberootR[1][0],cuberootR[1][1],1,2);        
               rq42r= real;        
               rq42c= complex;
               if((rq42r<=0)&&(cuberootR[1][0]>0))
               {
               rtcomp(cuberootR[1][0],cuberootR[1][1],2,2);        
               rq42r= real;        
               rq42c= complex;
               }
               rtcomp(cuberootR[2][0],cuberootR[2][1],1,2);        
               rq43r= real;        
               rq43c= complex;
               if((rq43r<=0)&&(cuberootR[2][0]>0))
               {
               rtcomp(cuberootR[2][0],cuberootR[2][1],2,2);        
               rq43r= real;        
               rq43c= complex;
               }
               if(q>=0){
                    quarticroot1r = -b/(4*a) - rq41r - rq42r - rq43r;
                    quarticroot1c = -rq41c - rq42c - rq43c;
                    quarticroot2r = -b/(4*a) -rq41r +rq42r +rq43r;
                    quarticroot2c = -rq41c +rq42c +rq43c;
                    quarticroot3r = -b/(4*a)+rq41r -rq42r +rq43r;
                    quarticroot3c = +rq41c -rq42c +rq43c;
                    quarticroot4r = -b/(4*a) +rq41r +rq42r -rq43r;
                    quarticroot4c = +rq41c +rq42c -rq43c;
               }
               if(q<0){
                    quarticroot1r = -b/(4*a) + rq41r + rq42r + rq43r;
                    quarticroot1c = +rq41c + rq42c + rq43c;
                    quarticroot2r = -b/(4*a) -rq41r -rq42r +rq43r;
                    quarticroot2c = -rq41c -rq42c +rq43c;
                    quarticroot3r = -b/(4*a)+rq41r -rq42r -rq43r;
                    quarticroot3c = +rq41c -rq42c -rq43c;
                    quarticroot4r = -b/(4*a) -rq41r +rq42r -rq43r;
                    quarticroot4c = -rq41c +rq42c -rq43c;
               }
      cout<<"\nThe four roots are:";
      cout<<"\n Root 1: "<<quarticroot1r<<" + i "<<quarticroot1c;                       
      cout<<"\n Root 2: "<<quarticroot2r<<" + i "<<quarticroot2c;
      cout<<"\n Root 3: "<<quarticroot3r<<" + i "<<quarticroot3c;
      cout<<"\n Root 4: "<<quarticroot4r<<" + i "<<quarticroot4c;
                  }
float quintic(float a,float b,float c,float d, float e)
{
      float sum,prod2,prod3,prod4,prod5;
      sum = a+b+c+d+e;
      if (sum<0)
      {
                cout<<"\nThe equation is: x^5+"<<abs(sum);
                }
                else
                {
                    cout<<"The equation is: x^5-"<<abs(sum);
                    };
      prod2 = a*b + a*c + a*d + a*e + b*c + b*d + b*e + c*d + c*e + d*e;
      if (prod2<0)
      {
                cout<<"x^4-"<<abs(prod2);
                }
                else
                {
                    cout<<"x^4+"<<abs(prod2);
                    };
      prod3 = a*b*c + a*b*d + a*b*e + a*c*d + a*c*e + a*d*e + b*c*d +
      b*c*e + b*d*e + c*d*e;
      if (prod3<0)
      {
                cout<<"x^3+"<<abs(prod3);
                }
                else
                {
                    cout<<"x^3-"<<abs(prod3);
                    };
      prod4 = a*b*c*d + a*b*c*e + a*b*d*e + a*c*d*e + b*c*d*e;
      if (prod4<0)
      {
                cout<<"x^2-"<<abs(prod4);
                }
                else
                {
                    cout<<"x^2+"<<abs(prod4);
                    };
      prod5 = a*b*c*d*e;
      if (prod5<0)
      {
                cout<<"x+"<<abs(prod5);
                }
                else
                {
                    cout<<"x-"<<abs(prod5);
                    };
      
      return 0;      
};
float quinticroot(float a,float b,float c, float d,float e, float f)
{
     float p,q,r,s;
     float rq41r,rq41c,rq42r,rq42c,rq43r,rq43c,rq44r,rq44c;
     
     if (b<0)
      {
                cout<<"\nThe equation is:"<<a<<"x^5-"<<abs(b);
                }
                else
                {
                    cout<<"The equation is:"<<a<<"x^5+"<<abs(b);
                    };
      if (c<0)
      {
                cout<<"x^4-"<<abs(c);
                }
                else
                {
                    cout<<"x^4+"<<abs(c);
                    };
      if (d<0)
      {
                cout<<"x^3-"<<abs(d);
                }
                else
                {
                    cout<<"x^3+"<<abs(d);
                    };
      if (e<0)
      {
                cout<<"x^2-"<<abs(e);
                }
                else
                {
                    cout<<"x^2+"<<abs(e);
                    };
     if (f<0)
      {
                cout<<"x-"<<abs(f);
                }
                else
                {
                    cout<<"x+"<<abs(f);
                    };
       
     cout<<"\n=================================\n";
      cout<<"\nThe reduced equation is ";
      p = (5*a*c - 2*b*b)/(5*a*a);
      if (p<0)
      {
                cout<<"\ny^5-("<<abs(p);
                }
                else
                {
                    cout<<"y^5+("<<abs(p);
                    };
      
      q = ((25*a*a*d-15*a*b*c + 4*b*b*b)/(25*a*a*a));
      if (q<0)
      {
                cout<<")y^3-("<<abs(q);
                }
                else
                {
                    cout<<")y^3+("<<abs(q);
                    };
      r = (125*a*a*a*e - 50*a*a*b*d + 15*a*b*b*c - 3*b*b*b*b)/(125*a*a*a*a);
      if (r<0)
      {
                cout<<")y^2-("<<abs(r)<<")";
                }
                else
                {
                    cout<<")y^2+("<<abs(r)<<")";
                    };
      s = (3125*a*a*a*a*f - 625*a*a*a*b*e + 125*a*a*b*b*d - 25*a*b*b*b*c + 4*b*b*b*b*b)/(3125*a*a*a*a*a);
      if (s<0)
      {
                cout<<"y-("<<abs(s)<<")";
                }
                else
                {
                    cout<<"y+("<<abs(s)<<")";
                    };
      
      cout<<"\n===================================\n";              
      double sab[2],sabc[2],sa3[2],sa[2],qr[10][2];
      sab[0] = ((-p/3)+sqrt(p*p/9+2*r/3))/2;
      sab[1] = ((-p/3)-sqrt(p*p/9+2*r/3))/2;
      sabc[0] = (-s/6+p*q/24-q*sab[0]/8)/(-p/6+5*sab[0]/2);
      sabc[1] = (-s/6+p*q/24-q*sab[1]/8)/(-p/6+5*sab[1]/2);
      sa3[0] = (1/8)*(q+12*sabc[0]);
      sa3[1] = (1/8)*(q+12*sabc[1]);
      
      cout<<"\nEntering cuberoot";
      cuberoot(1,0,-3*sab[0],3*sabc[0]-sa3[0]);
      cout<<"\nExiting cuberoot";
      
          qr[0][0] = cuberootR[0][0];
          qr[0][1] = cuberootR[0][1];
          qr[1][0] = cuberootR[1][0];
          qr[1][1] = cuberootR[1][1];
          qr[2][0] = cuberootR[2][0];
          qr[2][1] = cuberootR[2][1];
          
      cout<<"\nEntering cuberoot one more time";
      cuberoot(1,0,-3*sab[1],3*sabc[1]-sa3[1]);
      cout<<"\nExiting cuberoot";
      
          qr[5][0] = cuberootR[0][0];
          qr[5][1] = cuberootR[0][1];
          qr[6][0] = cuberootR[1][0];
          qr[6][1] = cuberootR[1][1];
          qr[7][0] = cuberootR[2][0];
          qr[7][1] = cuberootR[2][1];
          
      
          sa[0] = -p/3+2*sab[0];
      if (sa[0]<0)
      {
          qr[3][0] = 0;
          qr[3][1] = sqrt(-sa[0]);
          qr[4][0] = 0;
          qr[4][1] = -sqrt(-sa[0]);          
      }
      else
      {
          qr[3][0] = sqrt(sa[0]);
          qr[3][1] = 0;
          qr[4][0] = -sqrt(sa[0]);
          qr[4][1] = 0;          
      }
          sa[1] = -p/3+2*sab[1];
      if (sa[1]<0)
      {
          qr[8][0] = 0;
          qr[8][1] = sqrt(-sa[1]);
          qr[9][0] = 0;
          qr[9][1] = -sqrt(-sa[1]);          
      }
      else
      {
          qr[8][0] = sqrt(sa[1]);
          qr[8][1] = 0;
          qr[9][0] = -sqrt(sa[1]);
          qr[9][1] = 0;
      }
          
          
          for(int i = 0;i<10;i++)
          {
              cout<<"\n["<<i<<"] = "<<qr[i][0]<<" + i "<<qr[i][1];
          }
      /*
      q5root[0][0]= -b/(5*a) + quinticroot1r + quinticroot2r + quinticroot3r + quinticroot4r; 
      q5root[0][1]= + quinticroot1c + quinticroot2c + quinticroot3c + quinticroot4c; 
      q5root[1][0]= -b/(5*a) + quinticroot5r + quinticroot2r + quinticroot3r + quinticroot4r;
      q5root[1][1]= + quinticroot5c + quinticroot2c + quinticroot3c + quinticroot4c; 
      q5root[2][0]= -b/(5*a) + quinticroot1r + quinticroot2r + quinticroot3r + quinticroot5r;
      q5root[2][1]= + quinticroot1c + quinticroot2c + quinticroot3c + quinticroot5c; 
      q5root[3][0]= -b/(5*a) + quinticroot1r + quinticroot2r - quinticroot3r - quinticroot5r;
      q5root[3][1]= + quinticroot1c + quinticroot2c - quinticroot3c - quinticroot5c; 
      q5root[4][0]= -b/(5*a) + quinticroot5r + quinticroot2r + quinticroot3r - quinticroot4r;
      q5root[4][1]= + quinticroot5c + quinticroot2c + quinticroot3c - quinticroot4c; 
      */
      
      
      /*
      cout<<"\nThe five roots are:";
      cout<<"\n Root 1: "<<q5root[0][0]<<" + i "<<q5root[0][1];                       
      cout<<"\n Root 2: "<<q5root[1][0]<<" + i "<<q5root[1][1];
      cout<<"\n Root 3: "<<q5root[2][0]<<" + i "<<q5root[2][1];
      cout<<"\n Root 4: "<<q5root[3][0]<<" + i "<<q5root[3][1];
      cout<<"\n Root 5: "<<q5root[4][0]<<" + i "<<q5root[4][1];
      */
}

float rtcomp(float a, float b, int num, int nth)
{
     float modulus=0,argument=0,part=0,mod=0,k=0;
     modulus = sqrt(pow(a,2)+pow(b,2));
     if((a==0)&&(b==0))
     {
                       real = 0;
                       complex = 0;
                       }
                       
     //when both the real and complex is positive or negative
     else
     {
         if(b==0)
         {
             k=a/modulus;
             argument=acos(k);
         }
         else
         {
             k=b/modulus;
             argument=asin(k);
         };
       
       if(a<=0&&b>=0){
            argument=PI - argument;
       }
       if(a<=0&&b<=0){
            argument=PI + argument; 
       }
       if(a>=0&&b>=0){
            argument=argument; 
       }
       if(a>=0&&b<=0){
            argument=argument;
       }
       if(nth==2)
       {
                 part=sqrt(modulus);
       };
       if(nth==3)
       {
                 part=cbrt(modulus);
       };
       
       real= part * cos((argument+2*(num-1)*PI)/nth);
       complex= part * sin((argument+2*(num-1)*PI)/nth);
       
       }
     }
