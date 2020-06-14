#include<iostream>
#include<cstring>

using namespace std;
class String 
{
  private:
    char* str;
  public:
    String():str(NULL){}
    const char* c_str() const
    {
      return str;
    }
String & operator =(const String &s);
~String();
};
  /*
String & String:: operator = (const char* s)
{
  if(str)
    delete[] str;
  if(s)
  {
    str = new char[strlen(s)+1];
    strcpy(str,s);
  }
  else
    str = NULL;
  return *this;
}*/

String & String::operator=(const String &s)
{
  if(str = s.str)
    return *this;
  if(str)
    delete[] str;
  if(s.str)
  {
    str = new char[strlen(s.str)+1];
    strcpy(str,s.str);
  }
  else
str = NULL;
  return *this;
}



String::~String()
{
  if(str)
    delete [] str;
}

int main()
{
  String s1;
  String s2;
  s1 = "good luck";
  s2 = "Oh my God";
  s2 = s1;
  cout<<s1.c_str()<<endl;
}
