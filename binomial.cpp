#include "binomial.h"

float Binomial::GetCoefficient(float x)
{
  if (x==1)
    return coefficient[1];
  else if (x==2)
    return coefficient[2];
  else 
    return -1;
}


int Binomial::GetPower(int a)
  {
  if(a==1)
    return pow[1];
  else if(a==2)
    return pow[2];
  else 
    return -1; 
  }


float Binomial::Multiply(float x)
{
if(x==1)
    coefficient[1]*=x;
else if (x==2)
    coefficient[2]*=x;
return x;
}


float Binomial::Multiply(float x, int b)
{
  if ( x==1)
    coefficient[1]*=x;
  else if (x==2)
    coefficient[2]*=x;
  return x;

  if (b==1)
    pow[1]*=b;
  else if (b==2)
    pow[2]*=b;
  return b;
}

int Binomial::SetPower(int a, int b)
{
  if (a<0)
    {
     a=1;
     return a;
    }
  if (a==1)
    return 0; 
  else if (a==2)
    return 0;
  else 
    return -1;
}

int Binomial::Add(Binomial a)
{
  if ((pow[1]=a.pow[1]))
    return 0;
  else if ((pow[2]=a.pow[2]))
    return 0;
  else 
    return -1;
}