#!/bin/bash

while getopts ":f:o:h:" option; do
    case $option in
        f)
            filePath="$OPTARG"
            ;;
        o)
            outFilePath="$OPTARG"
            if  [ -z "$outFilePath" ] 
            then
                for filename in *.cpp  
                do
                    outFilePath=$filename
                    break
                done
            fi
            ;;
        h)
            echo "The script to compile only a C++ file"
            echo "Option: "
            echo "f: C++ file path that is compiled"
            echo "o: compiled binary file path"
            ;;
        *)
            echo "Invalid flag. Usage: $0 [-f C++ file path] [-o complied binary file path]"
            exit 1
            ;;
    esac
done

echo "Compile file $filepath ..."
echo "===================================="
g++ $filePath -Wall -Wextra -Wshadow -std=c++2a -o $outFilePath 2>&1
echo "===== COMPLETED ====="

