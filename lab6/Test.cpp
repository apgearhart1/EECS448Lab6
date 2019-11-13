/**
*    @file Test.cpp
*    @author Aaron Gearhart
*    @date 2019.11.11
*/

#include "Test.h"
using namespace std;
Test::Test(){
    if (testPeek())
    {
        cout<<"\nPeekFront() Works\n";
    }else{
        cout<<"\nPeekFront() doesn't work\n";
    }

    if (testEmpty()) {
      cout << "\nisEmpty() works" << '\n';
    }else{
        cout<<"\nisEmpty() doesn't work\n";
    }
    
    if (testDequeue()) {
      cout << "\ndequeue() works" << '\n';
    }else{
        cout<<"\ndequeue() doesn't work\n";
    }
    
    if (testEnqueue()) {
      cout << "\nEnqueue() works" << '\n';
    }else{
        cout<<"\nEnqueue() doesn't work\n";
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
    if (!q.isEmpty()) {
        tester = false;
    }
  
  q.enqueue(63);
  if (q.isEmpty()) {
    tester = false;
  }
  
  return tester;

}

bool Test::testDequeue(){
    Queue q;
    q.enqueue(649);
    int k = q.peekFront();
    q.enqueue(448);

    q.dequeue();
    if (k == q.peekFront()) {
        return true;
    }
    else{
        return false;
    }
}

bool Test::testEnqueue(){
    Queue q;
    q.enqueue(33);
    q.enqueue(43);
    bool tester = true;
    int k = 53;
    q.enqueue(k);
    if (k != q.peekFront()) {
        tester = false;
    }
    return tester;
}
