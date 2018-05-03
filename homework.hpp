//
//  homework.hpp
//  ChainofR
//


#ifndef homework_hpp
#define homework_hpp

#include <stdio.h>

class HomeworkStatus {
public:
    bool done = true;
    bool turnin = true;
    bool graded = false;
};

class HomeworkChecker {
    
protected:
    HomeworkChecker *next;
    
public:
    virtual void check(HomeworkStatus *homework) = 0;
    
    void doneWith(HomeworkChecker *next);
    
    void finished(HomeworkStatus *homework);
    
};

class Done : public HomeworkChecker {
public:
    void check(HomeworkStatus *homework);
};

class Turnin : public HomeworkChecker {
public:
    void check(HomeworkStatus *homework);
    
};

class Graded : public HomeworkChecker {
public:
    void check(HomeworkStatus *homework);
};
#endif /* homework_hpp */
