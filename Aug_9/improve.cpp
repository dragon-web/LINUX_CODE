#include<iostream>
#include<cstring>

using namespace std;


class my_string
{
    char *s;
  public:
        my_string(const char *str);
        my_string(const my_string &obj);
       ~my_string()
          {
                if (s)
                        delete[] s;
                    cout << "Free s\n" << endl;
                      
          }
            void show()
            {
                  cout << "show:" << endl;
                      cout << s << endl;
            }                  
};
my_string::my_string(const char* str)
{
    s = new char[strlen(str) + 1];
      cout << "Allocating room for s\n";
        strcpy(s, str);

}
my_string::my_string(const my_string &obj)
{
    s = new char[strlen(obj.s) + 1];
      strcpy(s, obj.s);
        cout << "Copy constructor called. \n";

}

mystring::my_string(const my_string &obj)
{


}

void display(my_string ob)
{
    ob.show();

}

my_string input()
{
    char str[80];
      cout << "Enter String:" << endl;
        cin >> str;
          
          my_string ob(str);
            return ob;

}

int main()
{
    my_string obj = input();
     obj.show();
     return 0;
}
