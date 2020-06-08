#ifndef _COMPRESS_HPP
#define _COMPRESS_HPP

namespace itertools
{
    class compress
    {
        public:
            template<typename Collection,typename BooleanCollection>
            compress(Collection collection,BooleanCollection booleanCollection);
            int* begin();
            int* end();

    };

    template<typename Collection,typename BooleanCollection>
    compress::compress(Collection collection,BooleanCollection booleanCollection)
    {

    }
}

#endif