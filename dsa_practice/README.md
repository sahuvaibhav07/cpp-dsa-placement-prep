# Quick Start Guide - DSA Practice

## 📁 Project Structure

```
dsa_practice/
├── main.cpp                    (Test file)
├── .vscode/                    (VS Code settings)
│   ├── c_cpp_properties.json   (Compiler config)
│   └── settings.json           (Code Runner config)
│
├── arrays/                     (Array problems)
│   └── linear_search.cpp
│
├── sorting/                    (Sorting algorithms)
│   └── bubble_sort.cpp
│
├── searching/                  (Search algorithms)
│   └── binary_search.cpp
│
├── stacks/                     (Stack problems)
│   └── stack_example.cpp
│
├── queues/                     (Queue problems)
│   └── queue_example.cpp
│
├── linked_lists/               (Linked list problems)
├── trees/                      (Tree problems)
└── graphs/                     (Graph problems)
```

---

## 🚀 Quick Setup Steps

### 1. **Open in VS Code**
   - Open VS Code
   - Click **File** → **Open Folder**
   - Navigate to: `C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice`
   - Click **Select Folder**

### 2. **Test if Setup Works**
   - Open `main.cpp`
   - Click **▶️ Run Code** button (top-right)
   - Should see output in terminal

### 3. **Start Solving Problems**
   - Create new `.cpp` files in appropriate folders
   - Click ▶️ to run and test

---

## ⚡ Running C++ Files

### Method 1: Using Run Button (Easiest) ✅
1. Open any `.cpp` file
2. Click **▶️ Run Code** button (top-right corner)
3. See output in terminal panel

### Method 2: Using Terminal
1. Open terminal: `Ctrl + ` (backtick)
2. Compile and run:
   ```bash
   g++ -o output_name filename.cpp
   .\output_name.exe
   ```

### Method 3: Run Specific File
```bash
cd arrays
g++ -o linear_search linear_search.cpp
.\linear_search.exe
```

---

## 📝 Template for New Problems

Create a new file (e.g., `problem_name.cpp`) in the appropriate folder:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your solution here
    
    cout << "Output here" << endl;
    
    return 0;
}
```

---

## 🐛 Troubleshooting

### Issue: "Run Code button not visible"
**Solution:** 
- Make sure file is `.cpp` format
- Reload VS Code: `Ctrl + Shift + P` → Type "Reload" → Enter

### Issue: "g++ not recognized"
**Solution:**
- MinGW not installed or PATH not set
- See full setup guide: `CPP_SETUP_GUIDE.md`
- Restart computer after setting PATH

### Issue: "Command failed"
**Solution:**
- Check file has valid C++ syntax
- Make sure file is saved: `Ctrl + S`
- Delete `.exe` files and try again

---

## 📚 Common Includes for DSA

```cpp
#include <iostream>      // Input/Output
#include <vector>        // Dynamic arrays
#include <algorithm>     // sort(), binary_search(), etc.
#include <queue>         // Queue
#include <stack>         // Stack
#include <map>           // Hash map
#include <set>           // Set
#include <string>        // String operations
#include <cmath>         // Math functions
```

---

## 💡 Tips for DSA Practice

1. **One problem per file** - Easier to manage
2. **Use meaningful names** - `binary_search.cpp`, `merge_sort.cpp`
3. **Add comments** - Explain algorithm logic
4. **Test with samples** - Include test cases
5. **Time complexity notes** - Write in comments

---

## 🎯 Next Steps

1. ✅ Install MinGW (see CPP_SETUP_GUIDE.md)
2. ✅ Set Environment Variables
3. ✅ Install VS Code extensions
4. ✅ Open this folder in VS Code
5. 🔄 Start creating DSA problems!

---

## 📞 Need Help?

- Read full guide: `../CPP_SETUP_GUIDE.md`
- VS Code Docs: https://code.visualstudio.com/docs/languages/cpp
- C++ Reference: https://cppreference.com

**Good luck with DSA preparation! 🚀**
