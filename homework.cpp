//
//  homework.cpp
//  ChainofR


#include "homework.hpp"
#include <iostream>
    
void HomeworkChecker::doneWith(HomeworkChecker *next)
    {
        this->next = next;
    }
    
void HomeworkChecker::finished(HomeworkStatus *homework)
    {
        if (this->next)
        {
            this->next->check(homework);
        }
    }


void Done::check(HomeworkStatus *homework)
    {
        if (!homework->done)
        {
            std::cout<<"Homework not done!"<<std::endl;
        }
        else if (homework->done)
        {
            std::cout<<"Homework done!"<<std::endl;
        }
        
        this->finished(homework);
    }


void Turnin::check(HomeworkStatus *homework)
    {
        if (!homework->turnin)
        {
            std::cout<<"Homework not turned in!"<<std::endl;
        }
        else if (homework->turnin)
        {
            std::cout<<"Homework turned in!"<<std::endl;
        }
        
        this->finished(homework);
    }


void Graded::check(HomeworkStatus *homework)
    {
        if (!homework->graded)
        {
            std::cout<<"Homework not graded!"<<std::endl;
        }
        else if (homework->graded)
        {
            std::cout<<"Homework graded!"<<std::endl;
        }
        
        this->finished(homework);
    }
