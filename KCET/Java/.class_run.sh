
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "d:\GCET\Semester 3\Java"
            if [ -f class ]; then
                rm class  # Remove the old binary if it exists
            fi
            g++ -o class class.cpp
            if [ $? -eq 0 ]; then
                ./class
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "d:\GCET\Semester 3\Java\.class_run.sh"
        