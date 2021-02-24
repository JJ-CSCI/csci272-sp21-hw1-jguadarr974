

class Binomial 
{
private:
  float coefficient[3]{0,1.0,1.0};
  int pow[3]{0,1,1};
public:
Binomial(float x=1.0,int a=1,float y=1.0,int b=1)
{
  coefficient[1]=x;
  pow[1]=a;
  coefficient[2]=y;
  pow[2]=b;
}

float GetCoefficient(float x);
int GetPower(int a);

int SetPower(int a, int b);
int Add (Binomial a);
float Multiply(float x);
float Multiply(float x, int b);
};