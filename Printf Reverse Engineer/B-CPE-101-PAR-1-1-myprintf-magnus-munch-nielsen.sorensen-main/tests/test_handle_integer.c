#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../src/my_headerfiles.h"

Test(my_printf, handle_integer .init = cr_redirect_stdout)
{
    int i =  49;
    my_printf("%i", i);
    cr_assert_stdout_eq_str("49");
}
