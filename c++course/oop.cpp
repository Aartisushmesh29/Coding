// #include <iostream>
// using namespace std;

// class Message{
//     public : 
//             virtual void process() const = 0 ;
// };

// class Greeting : public Message{
// public :
//   void process() const override{
//            cout << "This is Greet message" << endl;
//   }
// }; 

// class Farewell : public Message{
// public :
//   void process() const override{
//            cout << "This is Farewell message" << endl;
//   }
// }; 

// class MessageProcessor {
//        public : 
//                 void Output(const Message& message) const {
//                     message.process();
//                 }
// };

// int main()
// {
//     Greeting greet;
//     Farewell farewell;

//     MessageProcessor processor;
    
//     processor.Output(greet);
//     processor.Output(farewell);

//     return 0;
// }

// Assignment 2 
// Question 5 Code : 
#include <iostream>
#include <string>


class Book {
private:
    std::string title;
    std::string ISBN;
    double cost;

public:
    // Member function to input book details
    void input() {
        std::cout << "Enter book title: ";
        std::getline(std::cin, title);

        std::cout << "Enter ISBN: ";
        std::getline(std::cin, ISBN);

        std::cout << "Enter cost: ";
        std::cin >> cost;
        std::cin.ignore();  // Clear newline character from the buffer
    }

    // Member function to display book details
    void output() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "ISBN: " << ISBN << std::endl;
        std::cout << "Cost: $" << cost << std::endl;
    }

    // Member function to search for a book by title
    bool search(const std::string& searchTitle) const {
        return title == searchTitle;
    }
};

int main() {
    const int numBooks = 5;
    Book books[numBooks];

    // Input information for each book
    for (int i = 0; i < numBooks; ++i) {
        std::cout << "\nEnter details for Book " << i + 1 << ":\n";
        books[i].input();
    }

    // Search for a book by title
    std::string searchTitle;
    std::cout << "\nEnter the title of the book to search: ";
    std::getline(std::cin, searchTitle);

    bool found = false;
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].search(searchTitle)) {
            std::cout << "\nBook found! Details:\n";
            books[i].output();
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "\nBook not found.\n";
    }

    return 0;
}