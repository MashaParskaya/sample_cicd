# Sample CI/CD Project

This project demonstrates a complete CI/CD pipeline for a C++ library that performs basic arithmetic operations. The library includes a function to add two floating-point numbers. The project uses CMake for building, GTest for testing, Google Benchmark for performance measurement, and Doxygen for documentation generation.

[GitHub Pages](https://mashaparskaya.github.io/sample_cicd/)

## Table of Contents

- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Building the Project](#building-the-project)
- [Running Tests](#running-tests)
- [Performance Measurement](#performance-measurement)
- [Generating Documentation](#generating-documentation)
- [CI/CD Pipeline](#ci-cd-pipeline)
- [Contributing](#contributing)
- [License](#license)

## Overview

The project contains a simple C++ library with the following features:
- A function to add two floating-point numbers.
- CMake build system.
- Unit tests using GTest.
- Performance benchmarks using Google Benchmark.
- Documentation generation using Doxygen.

## Prerequisites

Before you start, ensure you have the following installed:
- CMake (>= 3.10)
- C++17 compatible compiler (e.g., GCC, Clang)
- GTest
- Google Benchmark
- Doxygen

## Building the Project

To build the project, follow these steps:

1. Clone the repository:
   ```
   git clone https://github.com/MashaParskya/sample_cicd.git
   cd sample_cicd
   ```

2. Create a build directory and navigate into it:
   ```
   mkdir build
   cd build
   ```

3. Configure and build the project:
   ```
   cmake ..
   make
   ```

## Running Tests

To run the unit tests, execute the following command from the build directory:
```
./bin/tests
```

## Performance Measurement

To run the performance benchmarks, execute the following command from the build directory:
```
./bin/g_benchmark
```

## CI/CD Pipeline

The project is set up with a CI/CD pipeline using GitHub Actions. The pipeline performs the following tasks:
- Builds the project.
- Runs unit tests.
- Runs performance benchmarks.
- Generates documentation.

You can find the workflow configuration in the `.github/workflows` directory.
