#include "Test.h"
using namespace std;
Test::Test(){
    if (testPeek())
    {
        cout<<"\nPeek Works\n";
    }else{
        cout<<"\nPeek Doesn't work\n";
    }

    if (testEmpty()) {
      cout << "\nisEmpty() works" << '\n';
    }else{
        cout<<"\nisEmpty() Doesn't work\n";
    }

}

Test::~Test(){

}


bool Test::testPeek(){
    Queue q;
    if (!q.isEmpty())
    {
        int k = 63;
        q.enqueue(k);
        if (q.peekFront() == k)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }

}

bool Test::testEmpty(){
  Queue q;
  bool tester = true;
  q.enqueue(63);
  if (q.isEmpty()) {
    tester = false;
  }
  return tester;

}
