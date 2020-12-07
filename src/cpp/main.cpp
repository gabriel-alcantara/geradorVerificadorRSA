// my_program.cpp
#include "../hpp/my_class.hpp"
#include "../hpp/file.hpp"
#include "../hpp/sha3.hpp"
#include "../hpp/openssl.hpp"

using namespace N;

int main()
{
    my_class mc;
    // mc.do_something();

    // file f;
    // f.read("C:\\cygwin64\\home\\Gabriel\\project makefile\\src\\files\\test.txt");

    // sha3 sha;
    // sha.stringToSha3("123456");

    openssl op;
    op.testRsa();



    return 0;
}