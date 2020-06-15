#include<iostream>

using namespace std;

class Complex
{
  private:
    double real,imag;
  public:
    Complex(double r = 0,double i = 0):real(r),imag(i){};
    operator double() {return real;}
};
int main(int argc,char* argv[])
{
  Complex c(1.2,3.4);
  cout<<(double)c<<endl;
  double n = 2+c;
  cout<<n<<endl;
  return 0;
}
