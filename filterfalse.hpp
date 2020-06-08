#ifndef _FILTERFALSE_HPP
#define _FILTERFALSE_HPP

namespace itertools
{
    class filterfalse
    {
        public:
            template<typename T,typename Collection>
            filterfalse(T t,Collection collection);
            // template<class T, typename Collection>
            // filterfalse(T t,Collection vec);
            int* begin();
            int* end();

    };
    template<typename T,typename Collection>
    filterfalse::filterfalse(T t,Collection collection)
    {

    }
//    template<class T, typename Collection>
//     filterfalse::filterfalse(T t,Collection vec)
//     {

//     }
}
#endif