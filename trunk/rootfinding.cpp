#include<iostream>
#include<cmath>
#define PI M_PI
using namespace std;
float real,complex;

float complexrootcompute(float/*real part*/,float/*complex part*/,int/*order*/,int/*nth root*/);
void inputcube(void);
void inputquartic(void);
void inputquintic(void);


void findrootcomplexquadratic(void);
void findrootcomplexcubic(void);

//this is used to get the coefficients of cubic and pass to cube function
void inputrootcube(void);
//this function is used to frame a cubic equation from the roots
float cube(float,float,float);
float cuberoot1r,cuberoot2r,cuberoot3r,/*the real part of three cube roots*/ 
cuberoot1c,cuberoot2c,cuberoot3c /*the complex part of three cube roots*/;
//this function is used to find the solution of a cubic equation
float cuberoot(float,float,float,float);

//this is used to get the coefficients of quartic and pass to quartic function
void inputrootquartic(void);
//this function is used to frame a quartic equation from the roots
float quartic(float,float,float,float);
float quarticroot1r,quarticroot2r,quarticroot3r,quarticroot4r,/*the real part of fourquartic roots*/
quarticroot1c,quarticroot2c,quarticroot3c,quarticroot4c; /*the complex part of four quartic roots*/
//this function is used to find the solution of a quartic equation
float quarticroot(float,float,float,float,float);

//this is used to get the coefficients of quintic and pass to quintic function
void inputrootquintic(void);
//this function is used to frame a quintic equation from the roots
float quintic(float,float,float,float,float);

float quinticroot1r,quinticroot2r,quinticroot3r,quinticroot4r,quinticroot5r,//the real part of five quintic roots 
quinticroot1c,quinticroot2c,quinticroot3c,quinticroot4c,quinticroot5c; //the complex part of five quintic roots

//this function is used to find the solution of a quintic equation
float quinticroot(float,float,float,float,float,float);

float con,x1,x2,x3,x4,x5,r1,r2,r3,r4,r5;
//this function adds two complex numbers
float addnumber(float, float, float, float);
float addnumberreal,addnumbercomplex;//to store real and complexpart of function addnumber()

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
                  inputrootcube();
                  break;
                  case 2: cout<<"\nInput the constants of the cubic equation.\n ";
                  inputcube();
                  break;
                  case 3: cout<<"\nEnter the roots of the quartic (biquadratic) equation.";
                  inputrootquartic();
                  break;
                  case 4: cout<<"\nInput the constants of the quartic equation.\n ";
                  inputquartic();
                  break;
                  case 5: cout<<"\nEnter the roots of the quintic equation.";
                  inputrootquintic();
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
    complexrootcompute(a,b,1,2);
    cout<<real<<" + i "<<complex;
    complexrootcompute(a,b,2,2);
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
    complexrootcompute(a,b,1,3);
    cout<<real<<" + i "<<complex;
    complexrootcompute(a,b,2,3);
    cout<<"\n"<<real<<" + i "<<complex;
    complexrootcompute(a,b,3,3);
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
void inputrootcube(void)
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
void inputrootquartic(void)
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
void inputrootquintic(void)
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
             if ((crcons==0)&&(cri==0))
             {
                  cuberoot1r=0;
                  cuberoot1c=0;
                  cuberoot2r=0;
                  cuberoot2c=0;
                  cuberoot3r=0;
                  cuberoot3c=0;
              }  
                else
             {
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
                  cuberoot1r=(-b/(3*a)) + crcons+crconsb;
                  cuberoot1c=cri+crib;
                  cout<<"\nThe root1 is :"<<cuberoot1r<<" + i "<<cuberoot1c;
                 
                  crcons2 = -.5*crcons - cri*sqrt(3)/2;
                  cri2 = crcons*sqrt(3)/2 - cri/2;
                 
                  crcons2b = -.5*crconsb + crib*sqrt(3)/2;
                  cri2b = -crconsb*sqrt(3)/2 - crib/2;
                  cuberoot2r=(-b/(3*a)) + crcons2+crcons2b;
                  cuberoot2c=cri2+cri2b;
                  cout<<"\nThe root2 is :"<<cuberoot2r<<" + i "<<cuberoot2c;
                 
                  crcons3 = -.5*crcons + cri*sqrt(3)/2;
                  cri3 = -crcons*sqrt(3)/2 - cri/2;
                 
                  crcons3b = -.5*crconsb - crib*sqrt(3)/2;
                  cri3b = crconsb*sqrt(3)/2 - crib/2;
                  cuberoot3r=(-b/(3*a)) + crcons3+crcons3b;
                  cuberoot3c=cri3+cri3b;
                  cout<<"\nThe root3 is :"<<cuberoot3r<<" + i "<<cuberoot3c;
              }
              }
              else
              {
              r2 = cbrt((-q/2)+ sqrt(r));
              r3 = cbrt((-q/2)- sqrt(r));
              
              cout<<"\nReal";
              cout<<"\nl = "<<r2;
              cout<<"\nm = "<<r3;
              
              
              crcons = r2;
              crconsb = r3;
              cuberoot1r=(-b/(3*a)) + crcons+crconsb;
              cuberoot1c=cri+crib;
              cout<<"\nThe root1 is :"<<cuberoot1r<<" + i "<<cuberoot1c;
              
              crcons2 = -.5*crcons;
              cri2 = crcons*sqrt(3)/2;
              
              crcons2b = -.5*crconsb;
              cri2b = -crconsb*sqrt(3)/2;
              cuberoot2r=(-b/(3*a)) + crcons2+crcons2b;
              cuberoot2c=cri2+cri2b;
              cout<<"\nThe root2 is :"<<cuberoot2r<<" + i "<<cuberoot2c;
              
              crcons3 = -.5*crcons;
              cri3 = -crcons*sqrt(3)/2;
              
              crcons3b = -.5*crconsb;
              cri3b = crconsb*sqrt(3)/2;
              cuberoot3r=(-b/(3*a)) + crcons3+crcons3b;
              cuberoot3c=cri3+cri3b;
              cout<<"\nThe root3 is :"<<cuberoot3r<<" + i "<<cuberoot3c;
              
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
      cuberoot(1,p/2,(p*p-4*r)/16,-q*q/64);
      cout<<"\nExiting cuberoot.";
      cout<<"\nEntering quarticroot.";
      
               complexrootcompute(cuberoot1r,cuberoot1c,1,2);        
               rq41r=real;        
               rq41c=complex;
               complexrootcompute(cuberoot2r,cuberoot2c,1,2);        
               rq42r=real;        
               rq42c=complex;
               complexrootcompute(cuberoot3r,cuberoot3c,1,2);        
               rq43r=real;        
               rq43c=complex;
      quarticroot1r = -b/(4*a) - rq41r - rq42r - rq43r;
      quarticroot1c = -rq41c +rq42c +rq43c;
      quarticroot2r = -b/(4*a) -rq41r +rq42r +rq43r;
      quarticroot2c = -rq41c +rq42c +rq43c;
      quarticroot3r = -b/(4*a) +rq41r +rq42r -rq43r;
      quarticroot3c = +rq41c +rq42c -rq43c;
      quarticroot4r = -b/(4*a) +rq41r -rq42r +rq43r;
      quarticroot4c = +rq41c -rq42c +rq43c;
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
      p = (c/a - 2*b*b/(5*a*a));
      if (p<0)
      {
                cout<<"\ny^5-("<<abs(p);
                }
                else
                {
                    cout<<"y^5+("<<abs(p);
                    };
      
      q = ((-3*b/5*a)*p) +(d/a - (2*b*b*b)/(25*a*a*a));
      if (q<0)
      {
                cout<<")y^3-("<<abs(q);
                }
                else
                {
                    cout<<")y^3+("<<abs(q);
                    };
      r = (((3*b*b/(25*a*a))*(c/a - (2*b*b)/(5*a*a)))+((-2*b/(5*a))*(d/a - (2*b*b*b)/(25*a*a*a)))+(e/a - (b*b*b*b)/(125*a*a*a*a)));
      if (r<0)
      {
                cout<<")y^2-("<<abs(r);
                }
                else
                {
                    cout<<")y^2+("<<abs(r);
                    };
      s = (((-1*b*b*b)/(125*a*a*a))*(c/a - (2*b*b)/(5*a*a)))+((b*b/(25*a*a))*(d/a - (2*b*b*b)/(25*a*a*a)))+(e/a - (b*b*b*b)/(125*a*a*a*a))*(-1*b/5*a)+(f/a - (b*b*b*b*b)/(5*5*5*5*5*a*a*a*a*a));
      if (s<0)
      {
                cout<<")y-("<<abs(s)<<")";
                }
                else
                {
                    cout<<")y+("<<abs(s)<<")";
                    };
      
      cout<<"\n===================================\n";              
      cout<<"\nEntering quarticroot.";
      float k,l,m,n;
      m = (q!=0)?(9*s + p*q )/(6*q):0;
      n = ((r/2 - (p*p)/9 + (p/3)*m)/4);
      l= -1*q/6;
      k = -1*p/3;
      k = sqrt(k+2*m);
      quarticroot(1,-1*k,m,-1*l,n);
      cout<<"\nExiting quarticroot.";
      cout<<"\nEntering quinticroot.";
      quinticroot1r = -b/(5*a) - quarticroot1r + quarticroot2r + quarticroot3r + quarticroot4r;
      quinticroot1c = -b/(5*a) - quarticroot1c + quarticroot2c + quarticroot3c + quarticroot4c;
      quinticroot2r = -b/(5*a) + quarticroot1r - quarticroot2r + quarticroot3r + quarticroot4r;
      quinticroot2c = -b/(5*a) + quarticroot1c - quarticroot2c + quarticroot3c + quarticroot4c;
      quinticroot3r = -b/(5*a) + quarticroot1r + quarticroot2r - quarticroot3r + quarticroot4r;
      quinticroot3c = -b/(5*a) + quarticroot1c + quarticroot2c - quarticroot3c + quarticroot4c;
      quinticroot4r = -b/(5*a) + quarticroot1r + quarticroot2r + quarticroot3r - quarticroot4r;
      quinticroot4c = -b/(5*a) + quarticroot1c + quarticroot2c + quarticroot3c - quarticroot4c;
      quinticroot5r = -b/(5*a) + quarticroot1r - quarticroot2r - quarticroot3r - quarticroot4r;
      quinticroot5c = -b/(5*a) + quarticroot1c - quarticroot2c - quarticroot3c - quarticroot4c;
      
      cout<<"\nThe five roots are:";
      cout<<"\n Root 1: "<<quinticroot1r<<" + i "<<quinticroot1c;                       
      cout<<"\n Root 2: "<<quinticroot2r<<" + i "<<quinticroot2c;
      cout<<"\n Root 3: "<<quinticroot3r<<" + i "<<quinticroot3c;
      cout<<"\n Root 4: "<<quinticroot4r<<" + i "<<quinticroot4c;
      cout<<"\n Root 5: "<<quinticroot5r<<" + i "<<quinticroot5c;
      
}
float complexrootcompute(float a, float b, int num, int nth)
{
     float modulus=0,argument=0,part,flag=0,temp=0;
     if((a==0)&&(b==0))
     {
                       real=0;
                       complex=0;
     }
      else                 
     {
     modulus = sqrt(pow(a,2)+pow(b,2));
       if((a<0)||(b<0))
       {
              a=-a;
              b=-b;
              flag=1;
       };
       b=b/modulus;
       argument=asin(b);
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
       if((flag==1)&&(nth==2))
       {
        temp = real;
        real = -complex;
        complex = temp;
        }          
        if((flag==1)&&(nth==3))
       {
        complex=-complex;
        real = -real;
        } 
       }
     }

float addnumber(float num1real, float num1complex, float num2real, float num2complex)
{
      addnumberreal = num1real + num2real;
      addnumbercomplex = num1complex + num2complex;
}
