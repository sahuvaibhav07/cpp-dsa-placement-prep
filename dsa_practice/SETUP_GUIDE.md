# C++ DSA Setup - Complete & Beginner-Friendly

## ✅ What's Configured

### 1. **Compiler Setup**
- ✅ MinGW g++ compiler installed
- ✅ g++ version: 6.3.0 (working correctly)
- ✅ Correctly compiles C++ files with std library support
- ✅ Handles input/output (cin/cout) properly

### 2. **VS Code Configuration**
- ✅ **tasks.json** - Uses `g++.exe` (NOT gcc)
- ✅ **settings.json** - Code Runner configured for C++
- ✅ Proper executor map for .cpp files
- ✅ Terminal output enabled

### 3. **Extensions Required**
- ✅ **C/C++ Extension** (by Microsoft) - IntelliSense & debugging
- ✅ **Code Runner Extension** - Run button functionality

### 4. **DSA Practice Folders**
```
dsa_practice/
├── arrays/
│   ├── linear_search.cpp
│   └── array_operations.cpp
├── linked_lists/
│   └── singly_linked_list.cpp
├── stacks/
│   └── stack_example.cpp
├── queues/
│   └── queue_example.cpp
├── searching/
│   ├── linear_search.cpp
│   └── binary_search.cpp
├── sorting/
│   ├── bubble_sort.cpp
│   ├── selection_sort.cpp
│   └── insertion_sort.cpp
├── trees/
│   └── binary_tree_traversal.cpp
├── graphs/
│   └── dfs_bfs.cpp
└── main.cpp
```

---

## 🚀 Quick Start

### **Method 1: Using Run Button (▶️)**
1. Open any `.cpp` file
2. Click the ▶️ **Run Code** button in top right corner
3. Output appears in terminal

**Example Files to Test:**
- [dsa_practice/main.cpp](../dsa_practice/main.cpp)
- [dsa_practice/sorting/bubble_sort.cpp](../dsa_practice/sorting/bubble_sort.cpp)
- [dsa_practice/arrays/linear_search.cpp](../dsa_practice/arrays/linear_search.cpp)

### **Method 2: Using Keyboard Shortcut**
1. Open `.cpp` file
2. Press: `Ctrl + Alt + N` (Run Code)

### **Method 3: Using Terminal**
```bash
# Navigate to file location
cd dsa_practice

# Compile with g++
g++ -o output bubble_sort.cpp

# Run the executable
.\output.exe
```

---

## ✨ Features Enabled

| Feature | Status | Details |
|---------|--------|---------|
| Run button (▶️) | ✅ Enabled | Works with Code Runner |
| g++ compiler | ✅ Correct | All cpp files use g++ |
| std library | ✅ Linked | cout, cin, vector work |
| Debug mode | ✅ Ready | F5 for debugging |
| Terminal output | ✅ Active | Runs in integrated terminal |
| Color output | ✅ Enabled | Diagnostic colors shown |

---

## 🛠️ Configuration Files

### **tasks.json** (Build Configuration)
```json
{
    "type": "cppbuild",
    "label": "C/C++: g++ build active file",
    "command": "C:\\MinGW\\bin\\g++.exe",
    "args": ["-fdiagnostics-color=always", "-g", "${file}", "-o", "${fileDirname}\\${fileBasenameNoExtension}.exe"]
}
```

### **settings.json** (Code Runner Config)
```json
{
    "code-runner.executorMap": {
        "cpp": "C:\\MinGW\\bin\\g++.exe -o $dir/$fileNameWithoutExt.exe $file && $dir/$fileNameWithoutExt.exe",
        "c": "C:\\MinGW\\bin\\gcc.exe -o $dir/$fileNameWithoutExt.exe $file && $dir/$fileNameWithoutExt.exe"
    },
    "code-runner.runInTerminal": true,
    "code-runner.preserveFocus": false
}
```

---

## ✅ Verification Checklist

- [ ] Click ▶️ on [dsa_practice/main.cpp](../dsa_practice/main.cpp)
- [ ] See output in terminal
- [ ] Try [sorting/bubble_sort.cpp](../dsa_practice/sorting/bubble_sort.cpp)
- [ ] Try [searching/binary_search.cpp](../dsa_practice/searching/binary_search.cpp)
- [ ] Try [arrays/array_operations.cpp](../dsa_practice/arrays/array_operations.cpp)
- [ ] All programs run without linking errors
- [ ] cout/cin work properly

---

## 🔧 Troubleshooting

### **Problem: "undefined reference to std::cout"**
**Solution:** Check g++ is used, not gcc
- Open Task: `Ctrl+Shift+D`
- Run default task
- Should show "g++ build"

### **Problem: No ▶️ button visible**
**Solution:** Install Code Runner
- `Ctrl+Shift+X` → Search "Code Runner"
- Click Install by Jun Han
- Reload VS Code

### **Problem: "g++ not recognized"**
**Solution:** g++ not in PATH
- Check: Open terminal → `g++ --version`
- If error: g++ at `C:\MinGW\bin\g++.exe`
- Update PATH in system environment variables
- Restart computer

### **Problem: Files won't compile**
**Solution:** Save the file first
- Press `Ctrl+S` to save
- Then click ▶️

---

## 📚 Sample Programs Included

### Arrays
- **linear_search.cpp** - Find element in array
- **array_operations.cpp** - Insert/delete operations

### Sorting
- **bubble_sort.cpp** - Simple O(n²) sort
- **selection_sort.cpp** - Find min, swap approach
- **insertion_sort.cpp** - Card sorting approach

### Searching
- **linear_search.cpp** - Check each element
- **binary_search.cpp** - O(log n) on sorted array

### Data Structures
- **singly_linked_list.cpp** - Node-based storage
- **stack_example.cpp** - LIFO principle
- **queue_example.cpp** - FIFO principle
- **binary_tree_traversal.cpp** - Tree traversal methods
- **dfs_bfs.cpp** - Graph algorithms

---

## 🎯 Placement Preparation Tips

1. **Practice Daily** - Do 2-3 programs per day
2. **Understand Logic** - Don't just copy-paste
3. **Try Variations** - Modify programs for new inputs
4. **Debug** - Use F5 to step through code
5. **Time Complexity** - Always think O(n) analysis

---

## 📝 Next Steps

1. ✅ Open [dsa_practice](../dsa_practice) folder
2. ✅ Pick any `.cpp` file
3. ✅ Click ▶️ button
4. ✅ See it run successfully
5. ✅ Modify and experiment!

**Happy Coding! 🎉**
