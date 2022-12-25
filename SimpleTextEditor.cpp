#include <cmath>
#include <cstdio>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

class strngOP
{
  string s;
  stack<string> hist;
  public:
  void textEditor(int ops)
  {
        switch (ops) {
            case 1:
            { 
                hist.push(s);
               string tmp;
               cin>>tmp;
               s.append(tmp); 
            }
            break;
            case 2:
            {
                hist.push(s);
                int n;
                cin>>n;
                if(n <= s.length())
                    s = s.substr(0, s.length() - n);
            }
            break;
            case 3:
            { 
                int ind;
                cin>>ind;
                if(ind <= s.length())
                    cout<<s[ind-1]<<endl;         
            }
            break;
            case 4:
            {
                s = hist.top();
                hist.pop();  
            }
            break;
            default:
            break;
        } 
  }  
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int ops,op = 0;    
    cin>>ops;
    strngOP txtOp;
    for(int i =0;i<ops;i++)
    {
        cin>>op;
        txtOp.textEditor(op);        
    }
    return 0;
}
