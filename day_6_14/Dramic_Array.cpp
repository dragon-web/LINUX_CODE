//动态数组，数组元素个数可以在初始化该对象指定
//可以动态往数组中添加元素
//使用该类时不用担心动态内存分配和释放问题
//能够像使用数组那样动态使用数组类对象，可以通过下标访问其元素

#include<iostream>
#include<cstring>
using namespace std;

class CArray
{
  int size;
  int *ptr;
  public:
  CArray(int s = 0);
  CArray(CArray & a);
  ~CArray();
  void push_bank(int v);
  CArray &operator = (const CArray & a);
  int length() const {return size;}
  int & operator[](int i)
  {
    return ptr[i];
  }
};

CArray::CArray(int s):size(s)
{
  if (s == 0)
    ptr = NULL;
  else{
    ptr = new int[s];
  }
}

CArray::CArray(CArray &a)
{
  if(!a.ptr)
  {
    ptr = NULL;
    size = 0;
    return;
  }
  ptr = new int[a.size];
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size = a.size;
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size = a.size;
}
CArray::~CArray()
{
if(ptr)
{
  delete []ptr;
}
}

CArray & CArray::operator=(const CArray &a)
{
  if(ptr == a.ptr)
  {
    return *this;
  }
  if(a.ptr == NULL)
  {
    if(ptr)
      delete []ptr;
    ptr = NULL;
    size = 0;
    return *this;
  }

  if(size < a.size)
  {
    if(ptr)
      delete []ptr;
    ptr = new int[a.size];
  }
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size = a.size;
  return *this;
}

void CArray::push_bank(int v)
{
  if(ptr)
  {
    int *temPtr = new int[size+1];
    memcpy(temPtr,ptr,sizeof(int)*size);
    delete [] ptr;
    ptr = temPtr;
  }
  else
  {
    ptr = new int[1];
    ptr[size++] = v;
  }
}

int main()
{
  CArray a;
  for(int i = 0;i < 5;++i)
  {
    a.push_bank(i);
  }
  CArray a2,a3;
  a2 = a;
  for(int i = 0; i<a2.length();++i)
  cout<<a2[i]<<" ";
  cout << endl;
  a[3] = 100;
  CArray a4(a);
  for(int i = 0;i < a4.length();++i)
  {
    cout<<a4[i]<<" ";
  }
  return 0;
}














