#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;
int main()
{
  string postfix;
  stack<int>s;
  cout<<"enter postfix expression with spaces:";
   getline(cin,postfix);
   stringstream ss(postfix);
   string token;
   while(ss>>token)
   {
      //if token is a number
      if(token[0]>='0' && token[0]<='9')
      {
          int number;
          stringstream convert(token);
          convert>>number;
          s.push(number);
      }
      //if token is an operator
      else
      {
       int b=s.top();
       s.pop() ;
       int a=s.top();
       s.pop();
       int result;
       switch(token[0])
       {
    case'+':
        result = a+b;
        break;
    case'-':
        result = a-b;
        break;
    case'*':
        result = a*b;
        break;
    case '/':
        result =a/b;
        break;
    default:
        cout<<"Invalid operator!"<<endl;
        return 0;
       }
       s.push(result);
      }

   }
   cout<<"Result ="<<s.top()<<endl;
   return 0;
}
