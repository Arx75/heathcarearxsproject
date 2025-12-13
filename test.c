

#include "healtcareproject.h"

int test_authenticate_success()
{
    struct User admin = {"admin", "1234", "admin"};

    int result = authenticate(admin, "admin", "1234");

    int expected = 1;
    int actual = result;

    printf("\n[Test Auth Success] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}

int test_authenticate_fail()
{
    struct User admin = {"admin", "1234", "admin"};

    int result = authenticate(admin, "admin", "wrongpass");

    int expected = 0;
    int actual = result;

    printf("\n[Test Auth Fail] expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);

    return expected == actual;
}

int main()
{
    test_authenticate_fail();
    test_authenticate_success();
}
