#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <string>

typedef std::vector<std::string> string_container;

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v) {

    std::copy(v.begin(), v.end(), std::ostream_iterator<T>(out, "\n"));
    return out;
}

namespace patch { //Patched std::to_string

    template <typename T> std::string to_string( const T& n ) {

        std::ostringstream stm;
        stm << n;
        return stm.str();
    }
}

string_container generate_book(std::size_t page_number);

int main() {

    std::string user_input; //"G" for turn page to left, "R" for turn page to right
    std::size_t number_page = 1;
    bool in = true;

    string_container book = generate_book(12);

    while(in) {


        std::cout << "What would you like to do ? (G for turn page to left and R for turn page to right, exit for exit)" << std::endl;
        std::cin >> user_input;

        if (user_input == "G" && number_page > 1) number_page--;
        else if (user_input == "R" && number_page < book.size() - 1) number_page++;
        else if (user_input == "exit") in = false;
        else std::cout << "Please retry" << std::endl;

        std::cout << book.at(number_page) << std::endl;
    }

    return 0;
}

string_container generate_book(std::size_t page_number) {

    string_container tmp;

    for(std::size_t it = 1; it < page_number + 2; ++it) {

        tmp.push_back("Welcome to page number " + patch::to_string(it - 1));
    }

    return tmp;
}
