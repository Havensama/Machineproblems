    #include <iostream>
    #include <queue>
    #include <string>

    using namespace std;

    int main()
    {
        queue<string> q;
        char choice;
        string data;

        do
        {
            cout << "[A] Push Name\n";       // Updated to specify "Name"
            cout << "[B] Pop Name\n";        // Updated to specify "Name"
            cout << "[C] Show Front Name\n"; // Updated to specify "Name"
            cout << "[D] Show Back Name\n";  // Updated to specify "Name"
            cout << "[E] Show Queue Size\n";
            cout << "[F] Quit\n";
            cout << "Enter Choice: ";
            cin >> choice;

            switch (toupper(choice))
            {
            case 'A':
                cout << "Enter name to push: ";
                cin.ignore();       // Clear input buffer
                getline(cin, data); // Use getline to read full name
                q.push(data);
                cout << "Name pushed.\n";
                break;

            case 'B':
                if (!q.empty())
                {
                    cout << "Popped name: " << q.front() << endl;
                    q.pop();
                }
                else
                {
                    cout << "Queue is empty. Nothing to pop.\n";
                }
                break;

            case 'C':
                if (!q.empty())
                {
                    cout << "Front of queue: " << q.front() << endl;
                }
                else
                {
                    cout << "Queue is empty.\n";
                }
                break;

            case 'D':
                if (!q.empty())
                {
                    cout << "Back of queue: " << q.back() << endl;
                }
                else
                {
                    cout << "Queue is empty.\n";
                }
                break;

            case 'E':
                cout << "Queue size: " << q.size() << endl;
                break;

            case 'F':
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
            }
            cout << endl;
        } while (toupper(choice) != 'F');

        return 0;
    }