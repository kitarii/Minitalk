# Minitalk - Data Exchange Using UNIX Signals

Minitalk is a project that demonstrates inter-process communication (IPC) using signals. The server and client communicate using only two signals: `SIGUSR1` and `SIGUSR2`.
The goal is to send a string from the client to the server without relying on any networking protocols, using only UNIX signals.

## Features
- The server receives messages from the client via UNIX signals.
- The client sends a string to the server using signals.
- The server prints the received string.
- The server can handle multiple messages from different clients without restarting.
- Uses `SIGUSR1` and `SIGUSR2` signals for communication.
- Includes error handling and ensures no memory leaks.


## Compilation
To compile the project, run: make
-> This will create the `client` and `server` executables.

## Usage
1. **Start the server**:  ./server
   Run the server first. It will print its process ID (PID) and wait for messages.

2. **Start the client**:  
The client takes two arguments: the server's PID and the message to send.
./client <server_pid> <message>