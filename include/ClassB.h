#ifndef TESTLIB_BASE_CLASSB_H_
#define TESTLIB_BASE_CLASSB_H_

namespace TestLib
{
    namespace Base
    {
        class ClassB
        {
        public:
            ClassB();
            virtual ~ClassB();

            void meth2();

            virtual void init();
        };
    }
}

#endif /* TESTLIB_BASE_CLASSB_H_ */
