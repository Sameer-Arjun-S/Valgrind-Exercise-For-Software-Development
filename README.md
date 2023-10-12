# Valgrind Exercise For Software Development
 Software development for robotics using Valgrind 
## Author
### Sameer Arjun S ssarjun@umd.edu

## Standard installation via command line
```
# Cloning to your disk
git clone https://github.com/Sameer-Arjun-S/Valgrind-Exercise-For-Software-Development.git

# Navigating to your repository
cd <path to repository>

# Configure the project and generate a native build system
cmake -S ./ -B build/

# Compiling and building the project
cmake --build build/

# Run the program and check fro memory leak errors using Valgrind tool
valgrind --leak-check=yes ./build/app/shell-app

