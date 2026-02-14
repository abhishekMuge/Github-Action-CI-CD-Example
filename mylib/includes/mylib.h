#pragma once

#ifdef _WIN32
  #ifdef MYLIB_EXPORTS
    #define MYLIB_API __declspec(dllexport)
  #else
    #define MYLIB_API __declspec(dllimport)
  #endif
#else
  #define MYLIB_API
#endif

namespace mylib {

class MYLIB_API Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
};

MYLIB_API void print_message();

}