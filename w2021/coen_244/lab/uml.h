#ifndef UML_H
#define UML_H

// This is the implementation of the UML diagram on slide #2

class Subject
{       
    public:
        virtual void call() const = 0; // pure virtual because RealSubject is inheriting from this
}

class RealSubject : public Subject
{
    public:
        void call() const override {
            // implementation here...
        }
}

class Proxy : public Subject
{
    public:
        Proxy(RealSubject *real_subject) : real_subject(new RealSubject(*real_subject)) {}; // init by inheritance
        void call() const override
        {
            // implementation here...
        }; // arbitrary call function to proxy
        ~Proxy() { delete pRealSubject };
        
    private:
        RealSubject *pRealSubject; // point to RealSubject instance for triage

}



#endif