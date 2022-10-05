// Define a string with a different value depending on compile time flag
#ifdef COMPILE_TIME_DEF
const char conditional_string[] = "Compiled with -DCOMPILE_TIME_DEF";
#else
const char conditional_string[] = "Compiled without -DCOMPILE_TIME_DEF";
#endif

// Define a compile time constant with a default value.
// The value can be overridden at compile time with (for example)
// -DRETURN_VALUE=4
#ifndef RETURN_VALUE
#define RETURN_VALUE 10
#endif

// Check the contents of these functions after preprocessing
int return_something() {
    return RETURN_VALUE;
}
int return_double_something() {
    return 2*RETURN_VALUE;
}
int multiply_something(const int input) {
    return input*RETURN_VALUE;
}
// Using a macro that depends on RETURN_VALUE
#define DIV_SOMETHING(x) x/RETURN_VALUE
int divide_something(const int input) {
    return DIV_SOMETHING(input);
}