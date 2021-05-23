#include "utility.h"
#include <iterator>
#include <sstream>
#include <array>
#include <deque>

int main(int argc, char* argv[])
{
    std::vector <std::string> vec;
    std::string const str { "Kirill Dasha Anton Artem Musaffo" };
    utility::get_lines (str, ' ', std::back_inserter(vec));


    std::array <int, 5> arr =  {1, 2, 3, 4, 5};
    std::deque <int> deq (10, 100);
    utility::print (deq, '\n');

    std::ostringstream ost;
    utility::make_nt ( std::ostream_iterator<int> { ost }, 5, [] {return 5;});

    std::cout << ost.str() << "\n";
    return 0;
}
