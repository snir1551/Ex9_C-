#ifndef _RANGE_HPP
#define _RANGE_HPP
namespace itertools
{
    class range
    {
        private:
        int a, b;
        
        public:
            range(int a,int b);
            int* begin();
            int* end();
    };
    
}
#endif