// include header files
#include <iostream>
#include <string>
#include <queue>
#include <functional>
#include <vector>
#include <utility>

using namespace std;

// operator<< overloaded to print a priority_queue container
template<class T>
ostream& operator<<(ostream& out, priority_queue<T>& q) {
    char comma[3] = {'\0', ' ', '\0'};
    out << '[';
    while (!q.empty()) {
        out << comma << q.top();
        q.pop();
        comma[0] = ',';
    }
    out << ']';
    return out;
}

void demo1() {
// example priority_queue storing pairs (two values)
    // create alias for better readability
    using my_pair_t = pair<size_t, bool>;
    using my_container_t = vector<my_pair_t>;

    // declare my_comp lambda functions 
    // first value is used as key to sort and maintain priority_queue in ascending order
    auto my_comp =
            [](const my_pair_t& e1, const my_pair_t& e2) 
            { return e1.first > e2.first; };

    // declare priority queue
    priority_queue< my_pair_t,
                    my_container_t,
                    decltype(my_comp) > my_pQueue(my_comp);

    my_pQueue.push(std::make_pair(5, true));
    my_pQueue.push(std::make_pair(3, false));
    my_pQueue.push(std::make_pair(7, true));
    cout << boolalpha;
    while(!my_pQueue.empty()) 
    {
        const auto& p = my_pQueue.top();
        std::cout << p.first << " " << p.second << "\n";
        my_pQueue.pop();
    }
}

void demo2() {
// example priority_queue storing pairs (two values)
    // create alias for better readability
    using my_pair_t = pair<size_t, string>;
    using my_container_t = vector<my_pair_t>;

    // declare my_comp lambda functions 
    // second value of pair is used as key to sort and maintain 
    // priority_queue in descending order
    auto my_comp =
            [](const my_pair_t& e1, const my_pair_t& e2) 
            { return e1.second < e2.second; };

    // declare priority queue
    priority_queue< my_pair_t,
                    my_container_t,
                    decltype(my_comp) > my_pQueue(my_comp);

    my_pQueue.push(std::make_pair(5, "Ball"));
    my_pQueue.push(std::make_pair(3, "Zebra"));
    my_pQueue.push(std::make_pair(7, "Apple"));
    cout << boolalpha;
    while(!my_pQueue.empty()) 
    {
        const auto& p = my_pQueue.top();
        std::cout << p.first << " " << p.second << "\n";
        my_pQueue.pop();
    }
}



int main() {
    //demo1();
    demo2();
    return 0;
}

