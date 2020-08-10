#include <iostream>
#include <QWidget>
typedef std::string string;


class MyClass{
  public:
    int myNum;
    string myStr;
    int sum(int a, int b);

};

int MyClass::sum(int a, int b){

  return a+b;


}


int main(){
  MyClass myobj;

  int a;
  string b;

  std::cout << "Please enter your number" << '\n';

  std::cin >> a;
  std::cin >> b;

  myobj.myNum = a;
  myobj.myStr = b;


  std::cout << myobj.sum(a, 12) << '\n';
  std::cout << myobj.myNum << "\n";
  std::cout << myobj.myStr <<'\n';



  return 0;


}
