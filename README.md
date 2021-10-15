![Sudoku Title Card](https://i.ibb.co/dP2VRWN/Sudoku-AI-Console-App-Title-Card.png)

# Sudoku AI &mdash; Puzzle-Solving Console App
> A simple brute force AI Sudoku puzzle solver app.

## Table of contents
* [General Info](#general-info)
* [Screenshots](#screenshots)
* [Technologies](#technologies)
* [Setup](#setup)
* [Features](#features)
* [Status](#status)
* [Inspiration](#inspiration)
* [Contact](#contact)

## General Info
When you run the code, the app will prompt you to enter an initial board to solve. You can type them in manually or paste them in. 
👇 Try the examples below: 👇

```cpp
0 0 3 0 0 9 4 6 0
0 0 6 0 0 0 1 0 0
0 0 0 6 3 2 0 0 0
5 0 0 0 0 1 0 0 2
0 2 4 0 0 0 6 8 0
8 0 0 2 0 0 0 0 7
0 0 0 5 4 7 0 0 0
0 0 2 0 0 0 8 0 0
0 4 5 1 0 0 9 0 0
```
```cpp
0 0 0 0 0 6 8 0 0 
0 7 0 0 0 1 0 0 9 
0 1 3 0 0 0 0 0 0 
0 0 0 6 5 0 2 0 0 
0 0 0 0 0 7 0 0 1 
9 0 0 0 0 0 6 3 0 
0 0 8 0 0 0 0 0 0
3 0 0 0 8 0 0 7 0 
0 0 0 3 4 0 0 0 5 
```
```cpp
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 
```
All zeros will be considered empty spaces and the current puzzle will print to screen  like so: <br>
![Start State](https://i.ibb.co/RDzxw67/Sudoku-AI-Console-App-Start-State.png)

At this point the AI will start and solve the board if it's solvable. Once finished, the program will display the board with the empty spaces filled. <br>
![Solved State](https://i.ibb.co/F67txvQ/Sudoku-AI-Console-App-Solved-State.png)

If the board is impossible to solve, then an error message ``Error: Board is unsolvable`` will be shown.

## Screenshots
![Sudoku Title Card](https://i.ibb.co/dP2VRWN/Sudoku-AI-Console-App-Title-Card.png)

## Technologies
Project is created with:
* C++ clang - version: 7.5.0 or higher
* G++ - version: 7.5.0 or higher

Project is hosted on [Repl.it Online IDE](https://repl.it)

## Setup
To run this code on Repl.it's online IDE, go to https://repl.it/@dariustb/Sudoku-AI, then click the green "Run" button at the top of the page (alternately, you can press ctrl + enter on your keyboard).

## Features
* Solves any 9x9 board in seconds
* Text-based illustration showing solution in console
* Solves multiple boards in one run

## Status
Project is: *finished*, after receiving the grade for this assignment. Any new changes would be added only to further decorate the text-based visuals.

## Inspiration
Project inspired by the famous game, *Sudoku*, and other simple board games to implement AIs from scratch. Additionally, this was assigned in a programming course to showcase ability in creating simple artificial intelligence

## Contact
S u d o k u &nbsp; A I <br>
by [Darius Brown](https://dariusbrown.dev) <br>
Created: September 19, 2019 - September 29, 2019 <br>
Questions or comments? Feel free to contact me [via email](mailto:dariustb@tech-center.com)!