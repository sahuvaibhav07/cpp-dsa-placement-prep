# C++ DSA Setup - Installation Verification Checklist

## 1️⃣ MinGW & Compiler Check

- [ ] Open Command Prompt (Win+R → cmd)
- [ ] Run: `g++ --version`
- [ ] Shows: "MinGW.org GCC-6.3.0-1" or similar
- [ ] g++ is at: `C:\MinGW\bin\g++.exe`

**Command to verify:**
```bash
where g++
g++ --version
```

---

## 2️⃣ VS Code Extensions Check

### **C/C++ Extension**
- [ ] Open VS Code
- [ ] Press `Ctrl+Shift+X`
- [ ] Search: "C/C++"
- [ ] See "C/C++" by Microsoft (red C logo)
- [ ] Status: "Installed" or "Enable"
- [ ] Click Enable if needed

### **Code Runner Extension**
- [ ] Still in Extensions
- [ ] Search: "Code Runner"
- [ ] See "Code Runner" by Jun Han
- [ ] Status: "Installed" or "Enable"
- [ ] Click Enable if needed

- [ ] Close Extensions panel (Esc)
- [ ] Reload VS Code: `Ctrl+Shift+P` → "Reload Window" → Enter

---

## 3️⃣ Configuration Files Check

### **Correct Files Exist**
- [ ] `.vscode/tasks.json` exists
- [ ] `.vscode/settings.json` exists
- [ ] Open [.vscode/tasks.json](.vscode/tasks.json)
- [ ] See `"command": "C:\\MinGW\\bin\\g++.exe"` (NOT gcc)
- [ ] Open [.vscode/settings.json](.vscode/settings.json)
- [ ] See Code Runner config with `"cpp": "...g++.exe..."`

---

## 4️⃣ Quick Test (Before Main Tests)

- [ ] Close and reopen VS Code completely
- [ ] Open [main.cpp](./main.cpp)
- [ ] Click ▶️ button (top right)
- [ ] Terminal appears at bottom
- [ ] See: `My DSA Journey Starts Today!`

✅ **If you see the output above, basic setup works!**

---

## 5️⃣ Run Each Sample Program

### **Sorting Algorithms**
- [ ] Open [sorting/bubble_sort.cpp](./sorting/bubble_sort.cpp)
- [ ] Click ▶️
- [ ] See sorted output
- [ ] No compilation errors

- [ ] Open [sorting/selection_sort.cpp](./sorting/selection_sort.cpp)
- [ ] Click ▶️
- [ ] See sorted output

- [ ] Open [sorting/insertion_sort.cpp](./sorting/insertion_sort.cpp)
- [ ] Click ▶️
- [ ] See sorted output

### **Searching Algorithms**
- [ ] Open [searching/linear_search.cpp](./searching/linear_search.cpp)
- [ ] Click ▶️
- [ ] See: "Element 40 found at index: 3"

- [ ] Open [searching/binary_search.cpp](./searching/binary_search.cpp)
- [ ] Click ▶️
- [ ] See: "Element 50 found at index: 4"

### **Data Structures**
- [ ] Open [arrays/array_operations.cpp](./arrays/array_operations.cpp)
- [ ] Click ▶️
- [ ] See insert/delete operations

- [ ] Open [stacks/stack_example.cpp](./stacks/stack_example.cpp)
- [ ] Click ▶️
- [ ] See stack output

- [ ] Open [queues/queue_example.cpp](./queues/queue_example.cpp)
- [ ] Click ▶️
- [ ] See queue output

- [ ] Open [linked_lists/singly_linked_list.cpp](./linked_lists/singly_linked_list.cpp)
- [ ] Click ▶️
- [ ] See linked list output

### **Advanced Topics**
- [ ] Open [trees/binary_tree_traversal.cpp](./trees/binary_tree_traversal.cpp)
- [ ] Click ▶️
- [ ] See Inorder, Preorder, Postorder traversals

- [ ] Open [graphs/dfs_bfs.cpp](./graphs/dfs_bfs.cpp)
- [ ] Click ▶️
- [ ] See DFS and BFS outputs

---

## 6️⃣ Compiler & Linking Check

**All programs should:**
- [ ] Compile without "undefined reference to std::cout"
- [ ] Compile without "undefined reference to std::vector"
- [ ] Link successfully (no linker errors)
- [ ] Run and show output in terminal

---

## 7️⃣ Keyboard Shortcut Test

- [ ] Open any `.cpp` file
- [ ] Press: `Ctrl+Alt+N` (Run Code shortcut)
- [ ] Program runs immediately
- [ ] Output in terminal

---

## 8️⃣ Debugging Test

- [ ] Open [main.cpp](./main.cpp)
- [ ] Click line number to add breakpoint (red dot appears)
- [ ] Press `F5` (Start Debugging)
- [ ] Debugger opens
- [ ] Program stops at breakpoint
- [ ] Close debugger: `Ctrl+Shift+D` → Stop button

---

## ✅ All Tests Passed?

If **ALL checkboxes are checked**, your setup is:
- ✅ **MinGW g++ properly installed**
- ✅ **VS Code extensions installed**
- ✅ **Code Runner configured correctly**
- ✅ **Compiler using g++ (not gcc)**
- ✅ **cin/cout working**
- ✅ **Ready for DSA practice!**

---

## ❌ Problems?

### **Still seeing "undefined reference to std::cout"?**
1. Close VS Code
2. Open Command Prompt
3. Run: `g++ --version`
4. If works: Reload VS Code (`Ctrl+Shift+P` → Reload)
5. If not: Check PATH environment variable

### **No ▶️ button?**
1. Install Code Runner (see step 2)
2. Reload VS Code
3. Refresh file (F5 in editor)

### **Compilation error but code looks correct?**
1. Save file: `Ctrl+S`
2. Try again: Click ▶️

---

## 📞 Support Commands

```bash
# Test g++ directly
g++ --version

# Compile a file manually
g++ -o output.exe main.cpp

# Run the compiled file
.\output.exe

# Test std library compilation
g++ -o test.exe -c main.cpp
```

**Once all tests pass, start solving DSA problems! 🚀**
