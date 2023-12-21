# playwith_c
C / C++ Playground.


# How It Is Organized

The following text describes how this GitHub repository is organized, its intended purpose for housing source code, and how to effectively utilize it for studying, reviewing, and experimenting with C programming.

## playground.cpp 

 This source code serves as a playground for learning and experimentation purposes introducing fundamental concept of C language. Feel free to modify, experiment, and explore different concepts here.  Comments and annotations are provided to aid understanding.

## Algorithms

This folder contains well-known algorithms such as linear search, binary search, B-trees, etc., implemented using the C programming language. It also serves as a space to experiment and play with these algorithms.

# MSYS2

To compile C C++ code in windows I am using Unix-like environment for building and running software, compiling code, and utilizing a variety of development tools and libraries. MSYS2 includes various development tools and compilers (such as GCC - GNU Compiler Collection)

## Visual Studio Code

* set up a terminal profile in Visual Studio Code to launch MSYS2.

```json
"terminal.integrated.profiles.windows": {
    "MSYS2 UCRT": {
        "path": "cmd.exe",
        "args": [
            "/c",
            "C:\\msys64\\msys2_shell.cmd -defterm -here -no-start -ucrt64"
        ]
    }
}
```

## References
* [C23 - C standard revision for 2024](https://en.wikipedia.org/wiki/C23_(C_standard_revision))