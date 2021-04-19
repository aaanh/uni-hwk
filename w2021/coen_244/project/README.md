# COEN 244 Project

### Author:

\> Nguyen Hoang Anh

### License:

\> [(CC BY-NC-ND 4.0) Attribution-NonCommercial-NoDerivatives 4.0 International](https://creativecommons.org/licenses/by-nc-nd/4.0/)

### Requirements:

-   gcc/c++ | std >= c++17
-   Windows: MinGW gcc | >=9.2.0 this includes the required `filesystem.h`; gnuWin make | v3.81; MinGW Unix command line tools
-   Apple/macOS/Darwin: Xcode command line tools (install by opening `Terminal.app` and invoke `git` or `c++` or some ubiquitous tools, unix tools like `cd` will not invoke the installation)
-   Ubuntu: `build-essential` package | latest

### Usage:

-   Using a terminal (cmd.exe, gnome-terminal, konsole, etc.)
-   CHANGEDIR `cd` into the my uncompressed project submission folder
-   COMPILE `make` my project
-   executable binary should be in `/output` folder
-   RUN by `./output/main` \*Note: \*nix platforms' executable should have no extension or `.o` as extension when compiled. Windows x86 should have `main.exe` when compiled.

### Cross-platform support:

-   Docker container: Completed
    -   Using the docker extension in VSCode, build image and run it.
    -   or `docker build ...` and `docker run -it ...`
-   Repl.it fork: Completed URL = https://replit.com/@zasshuwu/coen244projectdemo (if you are having trouble running it locally)

### Documentation:

-   This README.md
-   presentation.pptx
-   projectUML.jpg
