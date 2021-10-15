<div style="width: 100%; display: flex; flex-direction: row; justify-content: center;">
<div style="width:20%; margin: 1% 2% 1% 0%;">

[![zeltrex.com](./documentation/zeltrex_logo.png)](https://github.com/zeltrex/cpp_mk_cli_example)
</div><div style="width:50%; text-align: center;">

# Simpleast project example
</div><div style="width:30%;text-align: center;">

[![GitHub release (latest by date)](https://img.shields.io/github/v/release/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/releases/latest)
[![GitHub](https://img.shields.io/github/license/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/blob/master/LICENSE)
[![GitHub](https://img.shields.io/github/issues/zeltrex/cpp_mk_cli_example)](https://github.com/zeltrex/cpp_mk_cli_example/issues)
</div></div>

## Motivation

This project is an attemt to create template for the simple development, with all essentially needed things.
I will put afforts to add required links to the documentation, ISO, IEC and other basic components to tune this template met high standards even in hobby grade development.

## Features

- **GCC**: C/C++ compiler;
- **sh/bash**: scripts for integration;
- **CMake**: as main build system;
- **CTest**: automation of testing;
- **Googletests**: expert level unit testing and mockups;
- **Doxygen**: project documentation generation;
- **MarkDown**: as main documentation language;
- **Python**: automation;
- **Docker**: for testing and validation;

Project itself will be basic:
- predefined project structure;
- could be extended wtih libraries;
- prepeared to be retargeted for other purpuses;

## Usage

Clone repository and enter to repo directory:

```bash
git clone --recurse-submodules https://github.com/Zeltrex/cpp_mk_cli_example.git
cd cpp_mk_cli_example
```

Simply execute runme.sh

```bash
./runme.sh
```

**NOTE:** In some cases you will nee change permissions for that file (once)

```bash
sudo chmod +x runme.sh
```

## Preconditions

Those project prepeared for the linux Ubuntu, and does not tested in other environments.
All necceccery libs will be installed automatically, Single essential requirement: `Ubuntu 20.04` or higher should be used.
All tests will be done on the latest version of linux with default configurations.

## History


### Integration of CMake


### Documentation

Afret successfull script execution you could find project documentation by link [./.output/docs/html/index.html](http://./.output/docs/html/index.html) or ( <a href="./.output/docs/html/index.html" target="_top">./.output/docs/html/index.html</a>)

## Usefull Links

- Cmake documentation: [CMake Reference Documentation](https://cmake.org/cmake/help/latest/index.html)


## Error List

If you miss a configuration option or find a bug, please consider [opening an issue](https://github.com/zeltrex/cpp_mk_cli_example/issues)!


| Feature                         | Released | Updated |
| :------------------------------ | :---------------------------------------------------------- | ----------------------------------------------------------- |
| **C Project**:<br>features connected with C projects, Libs, etc ... |||
| `Library template`              | <span style="background:#1779c4;color:white">v1.0.0</span> | <span style="background:grey;color:white">v0.1.0</span> |
| **C++ Project**:<br>features connected with C projects, Libs, etc ... |||
| `CLI Project`                   | <span style="background:#1779c4;color:white">v1.0.0</span> | <span style="background:grey;color:white">v0.1.0</span> |


 ## Folder structure

 ```css
└── cpp_mk_cli_example      | project folder
    ├── .output             | folder for generated files, do not remove, use clean up
    |   ├── bin             | compiled binaries 
    |   └── docs            | generated documentation
    ├── documentation       | templates for the generated documentation
    ├── scripts             | sh/python scripts used for automation
    ├── sources             | folder for the projects
    ├── tests               | folder used by tests
    ├── deploy              | output folder cleen and prepeared for users
    ├── readme.md           | initial document
    ├── runme.sh            | automation script
    └── LICENS              | MIT license file
 ```