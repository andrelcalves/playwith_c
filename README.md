# playwith_c
My personal c / c++ playground



## MSYS2

To compile C C++ code in windows I am using Unix-like environment for building and running software, compiling code, and utilizing a variety of development tools and libraries. MSYS2 includes various development tools and compilers (such as GCC - GNU Compiler Collection)

### Visual Studio Code

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
