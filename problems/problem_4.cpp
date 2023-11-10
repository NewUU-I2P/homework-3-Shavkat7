#include <string>
#include <sstream>
using namespace std;

std::string problemSolution4(const std::string MA) {
    // write your code here
    std::string result;
    if (MA == "FF:FF:FF:FF:FF:FF") {
        result = "Broadcast";
    } else if (MA[1] % 2 == 0) {
        result = "Unicast";
    } else if (MA[1] % 2 != 0) {
        result = "Multicast";
    }
    // make use of control flow statements
    // return result;
    return result;
}
