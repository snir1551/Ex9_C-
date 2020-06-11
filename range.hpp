#ifndef _RANGE_HPP
#define _RANGE_HPP
namespace itertools
{
    class range
    {
        private:
        int a, b;
        
        public:
            range(int a,int b): a(0), b(0)
            {
                
            }
            int* begin()
            {
                return nullptr;
            }
            int* end()
            {
                return nullptr;
            }
    };
    
}
#endif