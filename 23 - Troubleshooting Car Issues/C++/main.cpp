#include <algorithm>
#include <iostream>
#include <memory>

struct Node {
    std::string output;
    std::unique_ptr<Node> yes;
    std::unique_ptr<Node> no;

    Node(std::string o) : output(o) {};
};

template <int Size> bool strinarray(std::string str, std::string (&arr)[Size]) {
    for (std::string i : arr) {
        if (str == i)
            return true;
    }
    return false;
}

bool getboolinput(std::string out) {
    while (true) {
        std::string YES[] = {"yes", "y", "true", "t"};
        std::string NO[]  = {"no", "n", "false", "f"};
        std::cout << out;  // let the input be formatting newlines etc
        std::string inp;
        std::cin >> inp;
        std::transform(inp.begin(), inp.end(), inp.begin(), ::tolower);
        if (strinarray(inp, YES))
            return true;
        if (strinarray(inp, NO))
            return false;
        else
            std::cout << "Not a valid entry, use y/n."
                      << std::endl;  // continues
    }
}

int main() {
    /* clang-format off */
    auto tree = std::make_unique<Node>(Node("Is the car silent when you turn the key? "));
    tree->yes = std::make_unique<Node>(Node("Are the battery terminals corroded? "));
    tree->yes->yes = std::make_unique<Node>(Node("Clean terminals and try again."));
    tree->yes->no = std::make_unique<Node>(Node("Replace cables and try again."));
    tree->no = std::make_unique<Node>(Node("Does the car make a clicking sound? "));
    tree->no->yes = std::make_unique<Node>(Node("Replace the battery."));
    tree->no->no = std::make_unique<Node>(Node("Does the car crank up but fail to start? "));
    tree->no->no->yes = std::make_unique<Node>(Node("Check spark plug connections."));
    tree->no->no->no = std::make_unique<Node>(Node("Does your car have fuel injection? "));
    tree->no->no->no->yes = std::make_unique<Node>(Node("Get it in for service."));
    tree->no->no->no->no = std::make_unique<Node>(Node("Check to ensure the choke is opening and closing."));
    /* clang-format on */

    while (tree->yes && tree->no) {
        bool answer = getboolinput(tree->output);
        if (answer == true)
            tree = std::move(tree->yes);
        else
            tree = std::move(tree->no);
    }
    std::cout << tree->output << std::endl;  // final output (solution)

    return 0;
}
