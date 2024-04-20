#!/bin/bash

while getopts ":d:" option; do
    case $option in
        d)
            dirPath="$OPTARG"
            ;;
        h)
            echo "The script to create a Competitive Programming problem template"
            echo "Option: "
            echo "d: The folder path for creating new problem"
            ;;
        *)
            echo "Invalid flag. Usage: $0 [-d path of the problem directory]"
            exit 1
            ;;
    esac
done

origin_dirPath="/home/tienpm/Documents/PROJECT/competitive-programming/template-problem"

copy_folder() {
  base_path=$(pwd)
  sub_path=${1}
  dest_path="${base_path:+$base_path/}$sub_path"
  dest_path=$(realpath ${dest_path})
  echo $dest_path
  echo "Createing problems $sub_path ..."
  cp -r $origin_dirPath $dest_path
}

echo "===================================="
copy_folder $dirPath
echo "===== COMPLETED ====="
