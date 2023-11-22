#include "test_2009.h"
#include <iostream>
#include <vector>   
using namespace standard;                 /* (1) */

empty function() {}                       /* (2) - Тип void */

int main() {
    i_number num1;                        /* (3) - Ціле число */
    u_number num2 = 1;                    /* (4) - Невід`ємне число */
    ul_number num3 = 1234567890;          /* (5) - Невід`ємне велике число */
    l_number num4 = -1234567890;          /* (6) - Велике число */
    ll_number num5 = 9999999999999999999; /* (7) - Дуже велике число */
    f_number num6 = 1.23f;                /* (8) - Дробове число типу float */
    d_number num7 = 4.56;                 /* (9) - Дробове число типу double */
    symbol ch = 'a';                      /* (10) - Символьний тип */
    text input_text = "qwerty";           /* (11) - Строковий тип */
    logical true_false = true;            /* (12) - Булева змінна */
    locked i_number num8 = 1;             /* (13) - Константне ціле число */
    input >> num1;                        /* (15) - cin */
    output << num1;                       /* (16) - cout */

    std::vector<i_number> name_vector;
    name_vector.in_to_vec(num8);          /* (17) - push_back */
    name_vector.rem_from_vec();           /* (18) - pop_back */
    function();

#ifdef windows32                          /* (19) _WIN32 */
    system("chcp 1251>nul");
#elif windows64                           /* (20) - _WIN64 */
    system("chcp 1251>nul");
#elif my_linux                            /* (21) - __linux__ */
#elif apple                               /* (22) - __APPLE__ */
#endif 

    return 0;
}