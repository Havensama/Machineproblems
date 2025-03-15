#include <iostream>
#include <stack>
#include <string> 

using namespace std;

int main() {
    stack<string> s; 
    char choice;
    string data; 

    do {
        cout << "[A] Push Name\n";
        cout << "[B] Pop Name\n";
        cout << "[C] Show Top Name\n";
        cout << "[D] Show Size\n";
        cout << "[E] Quit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (toupper(choice)) {
            case 'A':
                cout << "Enter name to push: ";
                cin.ignore(); // Clear input buffer
                getline(cin, data); // Use getline to read full name
                s.push(data);
                cout << "Name pushed.\n";
                break;

            case 'B':
                if (!s.empty()) {
                    cout << "Popped name: " << s.top() << endl;
                    s.pop();
                } else {
                    cout << "Stack is empty. Nothing to pop.\n";
                }
                break;

            case 'C':
                if (!s.empty()) {
                    cout << "Top of stack: " << s.top() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 'D':
                cout << "Stack size: " << s.size() << endl;
                break;

            case 'E':
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << endl;
    } while (toupper(choice) != 'E');

    return 0;
}