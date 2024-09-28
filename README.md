# Sample CI/CD Project

This project demonstrates a complete CI/CD pipeline for a C++ library that performs basic arithmetic operations. The library includes a function to add two floating-point numbers. The project uses CMake for building, GTest for testing, Google Benchmark for performance measurement, and Doxygen for documentation generation.

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
   git clone https://github.com/yourusername/sample_ci_cd.git
   cd sample_ci_cd
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
./bin/sample_tests
```

## Performance Measurement

To run the performance benchmarks, execute the following command from the build directory:
```
./bin/sample_benchmarks
```

## Generating Documentation

To generate the documentation, execute the following command from the build directory:
```
make doc
```

The generated documentation will be located in the `doc/html` directory.

## CI/CD Pipeline

The project is set up with a CI/CD pipeline using GitHub Actions. The pipeline performs the following tasks:
- Builds the project.
- Runs unit tests.
- Runs performance benchmarks.
- Generates documentation.

You can find the workflow configuration in the `.github/workflows` directory.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

1. Fork the repository.
2. Create a new branch: $ git checkout -b feature/new-feature $
3. Make your changes and commit them: $ git commit -m "Add some feature" $
4. Push to the branch: $ git push origin feature/new-feature $
5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.