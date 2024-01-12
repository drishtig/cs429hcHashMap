# CS429H Intro

Welcome to the preparatory project for CS 429H!

This project is designed to introduce you to programming in C as well as to reinforce your knowledge of a critical data structure, the hash map.

## Part 1: The Hashmap itself

Implement a hashmap that is designed to

### Getting Started:

This project will have you create two hash maps, one for a int key and a int value, and one for a string key and a int value. The code for these will end up being fairly similar, but it should encourage you to explore hashing for different data types as well as how strings work in C.

`hashmap.h` is a good starting point for this project, where you will have to fill in the `IntToIntHashMap` and `StrToIntHashMap` structs.
Then, you can move to `hashmap.c` and fill in the different hash map methods for these two data structures.

`hashmap.h` is known as a header file, and you can think of it as an interface which declares structs and functions so that they can be defined and used in other places.
In the case of this project, `hashmap.h` declares some structs and functions, and those functions are then given a definition in `hashmap.c`, which is a C code file.
Then, the `testmain.c` file uses the interface defined in `hashmap.h` to allow you to use the code definitions provided in `hashmap.c`.
Both `testmain.c` and `hashmap.c` have access to the declarations provided in `hashmap.h` because of the `#include` directive found at the top of those files.

### Running Your Code:

Your code will be tested through the main function in `testmain.c`.
Feel free to modifiy this file to run your own test cases.

To run your code, run: `make test`.
To run your code with gdb, run: `make debug`.

## Part 2: Exposing the Hashmap

We are now going to use the hasmap like a traditional command line utility.
C command line utilities take input from `stdin` and send output to `stdout`.
They report errors to `stderr`.

The goal of this section is to turn your hashmap into a command line utility taking commands from `stdin` and outputting the values to `stdout`.
The hope is also you output logging messages for each operation into `stderr`.

### Commands

For our purposes we have two types of commands

1. `put <key> <val>`: This will store something in your hashmap
1. `get <key>`: This will print the value stored at the key.

If nothing is `stdout` should receive `NF` for not found, `stderr` should read `Key <key> not found in hashmap.`.
