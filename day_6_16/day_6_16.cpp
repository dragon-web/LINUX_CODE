#include<iostream>

using namespace std;

class CBase
{
  private:
    int nPrivate;
  public:
    int nPublic;
  protected:
    int nProtected;
};
class CDerived:public CBase
{
  void AccessBase()
  {
    nPublic = 1; //正确 可以直接访问公有成员
    nPrivate = 1; //不正确 ，不能直接访问基类私有成员
    nProtected = 1;//正确，可以访问继承的protected成员
    CBase f;
    f.nProtected = 1;//不正确，函数只能访问this指针指向的对象
  }
}
int main()
{
  CBase b;
  CDerived d;
  int n = b.nProtected;//不正确，外部不能直接访问基类保护成员
  return 0;
}
