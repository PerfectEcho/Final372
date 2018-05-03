//
//  main.cpp
//  ChainofR
//

#include <iostream>
#include "homework.hpp"

int main()
{
    
    Done *done = new Done();
    Turnin *turnin = new Turnin();
    Graded *graded = new Graded();
    
  
    done->doneWith(turnin);
    turnin->doneWith(graded);
    
    
    HomeworkStatus *homework = new HomeworkStatus();
    
    std::cout<<"Checking Status of Homework"<<std::endl;
    std::cout<<std::endl;
    
    
    done->check(homework);
    
    std::cout<<std::endl;
    std::cout<<"Finished"<<std::endl;
    
    return 0;
}
