#include "testfx.h"
#include "getopt.h"

int main(int argc, char* argv[])
{
  for (test_vector::const_iterator i = tests().begin(); i != tests().end(); ++i)
  {
    optind = 1; // HACK: Reset optind before every test, so that getopt() runs "isolated"
    std::cout <<  "Running " << i->first << "..." << std::endl;
    i->second();
  }

  return 0;
}
