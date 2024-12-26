# Logger System

This project is a simple logging system implemented in C++. It uses the Factory design pattern to create different types of log messages and the Singleton design pattern to ensure that only one instance of the logger exists.

## Project Structure

### Files

- **CMakeLists.txt**: CMake configuration file to build the project.
- **Factory/**: Contains the factory class to create log objects.
  - `Factory.cpp`: Implementation of the factory class.
  - `Factory.h`: Header file for the factory class.
- **Log/**: Contains the log classes.
  - `Log.cpp`: Implementation of different log types (Error, Warning, Info) and the interface for them.
- **Logger/**: Contains the logger class.
  - `Logger.cpp`: Implementation of the logger class.
  - `Logger.h`: Header file for the logger class.
- **main.cpp**: Main entry point of the application, with the test for code provided.

## Classes

### Log

The `Log` class is the base class for different types of log messages. It has three derived classes:

- `LogError`: Represents an error log message.
- `LogWarning`: Represents a warning log message.
- `LogInfo`: Represents an informational log message.

### LogFactory

The `LogFactory` class is responsible for creating instances of different log types based on the provided log type.

### Logger

The `Logger` class is a singleton class that manages log messages. It provides methods to create log messages and display them.

## Usage
### Building the Project
To build the project, you can use CMake. Here are the steps:

1. Create a build directory:
```
mkdir build
cd build
```
2. Configure the project:
```
cmake ..
```
3. Build the project:
```
cmake --build .
```
4. Change directory:
```
cd Debug
```
5. Run the executable:
```
./main
```