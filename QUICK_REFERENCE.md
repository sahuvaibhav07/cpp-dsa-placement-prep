# C++ DSA - Quick Reference & Troubleshooting

## 🚀 One-Click Start

1. **Open VS Code**
2. **Open folder:** `C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice`
3. **Open any `.cpp` file** (e.g., [main.cpp](./main.cpp))
4. **Click ▶️ button** (top-right corner)
5. **See output in terminal**

---

## 📁 Folder Structure Explained

```
dsa_practice/
├── 📄 main.cpp ..................... Test file (start here)
├── 📄 README.md .................... Project overview
├── 📄 SETUP_GUIDE.md ............... Detailed setup info
├── 📄 VERIFICATION_CHECKLIST.md .... Test all features
│
├── 📂 arrays/
│   ├── linear_search.cpp ........... Search in array
│   └── array_operations.cpp ........ Insert/delete
│
├── 📂 linked_lists/
│   └── singly_linked_list.cpp ...... Node-based list
│
├── 📂 stacks/
│   └── stack_example.cpp ........... LIFO structure
│
├── 📂 queues/
│   └── queue_example.cpp ........... FIFO structure
│
├── 📂 searching/
│   ├── linear_search.cpp ........... O(n) search
│   └── binary_search.cpp ........... O(log n) search
│
├── 📂 sorting/
│   ├── bubble_sort.cpp ............. Simple O(n²)
│   ├── selection_sort.cpp .......... Selection method
│   └── insertion_sort.cpp .......... Card sorting
│
├── 📂 trees/
│   └── binary_tree_traversal.cpp ... Inorder/Preorder/Postorder
│
├── 📂 graphs/
│   └── dfs_bfs.cpp ................. Depth/Breadth First Search
│
└── 📂 .vscode/
    ├── settings.json ............... Code Runner config
    └── tasks.json .................. Build config
```

---

## ⌨️ Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| **Run Code** | `Ctrl+Alt+N` |
| **Build (g++)** | `Ctrl+Shift+B` |
| **Start Debug** | `F5` |
| **Stop Debug** | `Ctrl+Shift+F5` |
| **Save File** | `Ctrl+S` |
| **Open Terminal** | `Ctrl+`` (backtick) |
| **Reload VS Code** | `Ctrl+Shift+P` → "Reload Window" |

---

## 🧪 Test Programs (Ordered by Difficulty)

### **Beginner Level** ✅
1. **[main.cpp](./main.cpp)** - Simple cout
2. **[arrays/linear_search.cpp](./arrays/linear_search.cpp)** - Basic loop search
3. **[sorting/bubble_sort.cpp](./sorting/bubble_sort.cpp)** - Nested loops

### **Intermediate Level** 📈
4. **[arrays/array_operations.cpp](./arrays/array_operations.cpp)** - Array manipulation
5. **[searching/binary_search.cpp](./searching/binary_search.cpp)** - Divide & conquer
6. **[sorting/selection_sort.cpp](./sorting/selection_sort.cpp)** - More complex logic
7. **[stacks/stack_example.cpp](./stacks/stack_example.cpp)** - Simple data structure

### **Advanced Level** 🚀
8. **[linked_lists/singly_linked_list.cpp](./linked_lists/singly_linked_list.cpp)** - Pointers & dynamic memory
9. **[trees/binary_tree_traversal.cpp](./trees/binary_tree_traversal.cpp)** - Recursion
10. **[graphs/dfs_bfs.cpp](./graphs/dfs_bfs.cpp)** - Advanced algorithms

---

## ✅ Compiler & Extensions Status

### **Installed & Configured**
- ✅ **MinGW g++ 6.3.0** - C++ Compiler
- ✅ **C/C++ Extension** - IntelliSense & Debug
- ✅ **Code Runner Extension** - Run button
- ✅ **.vscode/settings.json** - Code Runner config
- ✅ **.vscode/tasks.json** - g++ build config

### **Configuration Summary**
```json
// Compiler: g++ (NOT gcc)
// Command: C:\MinGW\bin\g++.exe
// Features: Color output, Debug symbols, std library linked
// Terminal: Integrated VS Code terminal
// Shortcuts: Ctrl+Alt+N (run), F5 (debug)
```

---

## 🔍 Common Issues & Fixes

### ❌ Issue: "undefined reference to std::cout"
**Cause:** Using gcc instead of g++  
**Fix:** Run command task and select "g++ build"  
- `Ctrl+Shift+B` → Select "C/C++: g++ build active file"

### ❌ Issue: No ▶️ button visible
**Cause:** Code Runner not installed  
**Fix:** Install Code Runner extension
- `Ctrl+Shift+X` → Search "Code Runner" → Install

### ❌ Issue: "g++ not recognized"
**Cause:** g++ not in PATH environment variable  
**Fix:** Reinstall MinGW or update PATH
- Right-click Start → System → Environment Variables
- Add: `C:\MinGW\bin` to PATH
- Restart computer

### ❌ Issue: File won't compile
**Cause:** File not saved  
**Fix:** Save before running
- Press `Ctrl+S` then click ▶️

### ❌ Issue: Old .exe file still running
**Cause:** Executable locked by previous run  
**Fix:** Delete .exe file manually or use new name
- In terminal: `del *.exe`

---

## 📚 Learning Path for Placement Prep

### **Week 1: Basics**
- Arrays (linear_search.cpp)
- Strings (string operations)
- Basic loops

### **Week 2: Sorting & Searching**
- Bubble sort
- Selection sort
- Insertion sort
- Binary search

### **Week 3: Data Structures**
- Stack
- Queue
- Linked List

### **Week 4: Advanced**
- Trees & Tree Traversal
- Graphs (DFS/BFS)
- Dynamic Programming

### **Week 5+: Optimization**
- Time/Space complexity
- Optimal algorithms
- Interview preparation

---

## 🔧 Manual Compilation (Terminal Method)

If you prefer not to use the Run button:

```bash
# Navigate to file location
cd "C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice"

# Compile with g++
g++ -o bubble bubble_sort.cpp

# Run the executable
.\bubble.exe

# Clean up
del *.exe
```

---

## 📖 Sample Output Verification

When you run [bubble_sort.cpp](./sorting/bubble_sort.cpp), you should see:
```
=== Bubble Sort ===
Original Array: 64 34 25 12 22 11 90 
Sorted Array:   11 12 22 25 34 64 90 
```

When you run [linear_search.cpp](./searching/linear_search.cpp), you should see:
```
=== Linear Search ===
Array: 10 20 30 40 50 60 70

Element 40 found at index: 3
```

---

## 💡 Pro Tips

1. **Always save before running** - `Ctrl+S`
2. **Use meaningful variable names** - Helps during interviews
3. **Add comments** - Explain your logic
4. **Test with edge cases** - Empty input, single element, duplicates
5. **Think of time complexity** - O(n), O(n²), O(log n)?
6. **Debug step-by-step** - Press F5 and use breakpoints

---

## 🎯 Next Steps

1. ✅ Open [dsa_practice](.) folder in VS Code
2. ✅ Test [main.cpp](./main.cpp) with ▶️ button
3. ✅ Try [sorting/bubble_sort.cpp](./sorting/bubble_sort.cpp)
4. ✅ Complete the [VERIFICATION_CHECKLIST.md](./VERIFICATION_CHECKLIST.md)
5. ✅ Start practicing with different programs
6. ✅ Modify programs to understand better
7. ✅ Create your own variations

**Start with simple programs and gradually move to complex ones!**

---

## 🚀 You're Ready!

Your setup is:
- ✅ Complete
- ✅ Tested
- ✅ Beginner-friendly
- ✅ Ready for interview prep

**Happy coding and good luck with placements! 🎉**
