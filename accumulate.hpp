#ifndef _ACCUMULATE_HPP
#define _ACCUMULATE_HPP


namespace itertools
{

    class accumulate
    {
        public:


            template<typename Collection,class Func>
            accumulate(Collection collection, Func fun);

            template<typename Collection>
            accumulate(Collection collection);
            int* begin();
            int* end();
    };

    template<typename Collection,class Func>
    accumulate::accumulate(Collection collection, Func fun)
    {

    }

    template<typename Collection>
    accumulate::accumulate(Collection collection)
    {
        
    }

}
#endif