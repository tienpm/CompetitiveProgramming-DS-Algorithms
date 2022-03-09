echo "[INFO] Input task: "
read task
exe_file=./exe
if [ -f "$exe_file" ]; then
	echo "[INFO] Delete last execution file"
	rm $exe_file
fi
g++ "$task.cpp" -std=c++17 -o $exe_file
./$exe_file < "$task.in"
