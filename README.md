# MyLoggerProject

A simple C++ logging example using the [spdlog](https://github.com/gabime/spdlog) library. This project demonstrates how to configure spdlog to output logs to both the console and a file (`logs.txt`).

## Features

- **Dual Output**: Logs are written to both the console and a file.
- **Custom Formatting**: Different log formats for console (colored) and file (detailed).
- **Log Level Control**: Supports all log levels from TRACE to CRITICAL.
- **Easy Integration**: Uses modern CMake for dependency management.

## Prerequisites

- C++17 compatible compiler
- CMake 3.14+
- spdlog library (installation instructions below)

## Installation

### Install spdlog

#### Linux (Ubuntu/Debian)
```bash
sudo apt-get install libspdlog-dev
```
#### macOS (Homebrew)
```bash
brew install spdlog
```
#### Windows (vcpkg)
```bash
vcpkg install spdlog
```
## Build the Project
#### Clone the repository:
```bash
git clone https://github.com/liuliuliu-creat/spdlogs/tree/main
```
#### Create a build directory and compile:
```bash
mkdir build
cd build
cmake ..
make
```
