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
    
        int k = 63;
        int j = 23;
        q.enqueue(k);
        q.enqueue(j);
        if (q.peekFront() == k)
        {
            return true;
        }
        else
        {
            return false;
        }
    
}

bool Test::testEmpty(){
  Queue q;
    bool tester = true;
    if (!q.isEmpty()) {
        tester = false;
    }
  
  for (int i = 0; i < 100; i++) {
      q.enqueue(i);
      
  }
  if (q.isEmpty()) {
    tester = false;
  }
  
  return tester;

}

bool Test::testDequeue(){
    Queue q;
    for (int i = 0; i < 100; i++) {
        q.enqueue(i);
        
    }
    for (int i = 0; i < 100; i++) {
        q.dequeue();
    
    }
    if (q.isEmpty()) {
        return true;
    }
    
    q.dequeue();
    q.dequeue();
    return false;
}

bool Test::testEnqueue(){
    Queue q;
    for (int i = 0; i < 100; i++) {
        q.enqueue(i);
        
    }
    if (q.isEmpty()) {
        return false;
    }
    return true;
}

