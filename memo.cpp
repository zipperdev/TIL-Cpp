/* include statements */
#include <iostream> // same as 'import' in JS
#include <climits>

/* using namespace */
using namespace std; // same as 'import *' but already imported in JS

int memo() {
    /* variable types */
    short num_short = SHRT_MAX;
    int num_int = INT_MAX;
    long num_long = LONG_MAX;
    long long num_longlong = LLONG_MAX;
    float num_float = 1.234; // smaller than double
    double num_double = 1.234; // bigger than float
    bool boolean = false; // 0, false : 0 ; 1, true : 1 (0 is false, 1 is true)
    char one_char = 'a';
    char more_chars[] = { 'a', 'b', 'c', '\0' };
    string text_chars = "Hello world!";

    /* variable vs constants */
    string variable_text = "Hello variable!"; // you can change
    const string constant_text = "Hello constants!"; // you cannot change

    return 0;
}
