Project Overview
This project is a console-based Tic Tac Toe game developed using C++. The game demonstrates core programming concepts such as loops, arrays, functions, and conditional statements. It allows two players to play Tic Tac Toe interactively in the terminal with dynamic board updates, win/loss detection, draw handling, and replay functionality.

Features
Two-player gameplay

Dynamic game board display

Input validation

Win detection

Draw detection

Replay option

Simple and user-friendly console interface

Technologies Used
Programming Language: C++

Compiler: GCC / g++ / Turbo C++ / CodeBlocks / VS Code

Concepts Used
Arrays

Loops

Conditional Statements

Functions

User Input Handling

Game Logic Implementation

Game Rules
The game is played between two players:

Player X

Player O

Players take turns entering positions from 1 to 9.

The first player to align three symbols horizontally, vertically, or diagonally wins.

If all positions are filled and no player wins, the game ends in a draw.

Board Layout

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
How to Run the Program
Step 1: Save the File
Save the source code as:


tictactoe.cpp
Step 2: Compile the Program
Using g++ compiler:

Bash

g++ tictactoe.cpp -o tictactoe
Step 3: Run the Program
Windows:
Bash

tictactoe.exe
Linux / Mac:
Bash

./tictactoe
Sample Output

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player X, enter position (1-9): 5
After several moves:


 X | O | 3
---|---|---
 4 | X | 6
---|---|---
 O | 8 | X

Player X wins!
Project Structure

MiniGameProject/
│
├── tictactoe.cpp
└── README.md
Learning Outcomes
By completing this project, the following programming concepts are understood:

Implementing game logic using C++

Working with arrays and loops

Using functions for modular programming

Handling user input and validation

Designing interactive console applications

Future Enhancements
Single-player mode with AI

Score tracking system

Better UI design

Multiplayer over network

Colored console output

Sound effects

Conclusion
This Tic Tac Toe project is a simple yet effective implementation of a console-based game in C++. It provides practical experience with problem-solving, logic building, and interactive programming concepts.

Author
Your Name Here

License
This project is open-source and free to use for educational purposes.



