#ifndef TESTLIB_BASE_CLASSA_H_
#define TESTLIB_BASE_CLASSA_H_

namespace TestLib
{
    namespace Base
    {
        class ClassA
        {
        public:
            ClassA();
            virtual ~ClassA();

            void meth1();

            virtual void update();
        };
    }
}

#endif /* TESTLIB_BASE_CLASSA_H_ */
