# Valgrind Exercise For Software Development
 Software development for robotics using Valgrind 
 
 # Answers for extra credit
 What happens when the executable is linked statically?  Does Valgrind still detect those same bugs?
 Why or why not?
 Answer:
 The libraries and dependencies required by a program are included in the executable when a executable 
 is linked statically, leading to a larger file. However, Valgrind is a dynamic memory leak analysis 
 tool and it works by running the program in a controlled enviroment by analyzing system calls and 
 memory operations to find errors like memory leaks, overflows and race conditions.
 Hence, in the case of a statically linked executable, Valgrind might not be able to detect all the
 errors it might otherwise have because, in this case the program does not depend on dynaically linked shared
 libraries at runtime. However, it will still be able to detect memory allocation & deallocation types
 of issues because these are issues which are within the program.
 
 
 
 
