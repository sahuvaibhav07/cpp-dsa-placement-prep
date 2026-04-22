# C++ DSA Setup Guide for Windows (Beginner Level)

**Goal:** Complete setup for C++ DSA practice with Run button support in VS Code

---

## STEP 1: Install MinGW-w64 Compiler

### What is MinGW-w64?
MinGW-w64 is a free compiler that allows you to write and run C++ programs on Windows.

### Installation Steps:

1. **Download MinGW-w64:**
   - Visit: https://www.mingw-w64.org/
   - Click **"Downloads"** → **"Sourceforge"**
   - OR directly: https://sourceforge.net/projects/mingw-w64/files/

2. **Choose the Right Version:**
   - Download the **Online Installer** (easiest option)
   - File: `mingw-w64-online-installer.exe`

3. **Run the Installer:**
   - Double-click `mingw-w64-online-installer.exe`
   - Click **"Next"**
   - Choose settings:
     - **Version:** Latest (e.g., 14.1 or higher)
     - **Architecture:** x86_64 (for 64-bit Windows)
     - **Threads:** posix
     - **Exceptions:** dwarf
     - **Build revision:** Latest
   - Click **"Next"**
   - **Installation Folder:** Keep default: `C:\Program Files\mingw-w64\x86_64-14.1-posix-dwarf-rt_v12-rev0`
   - Click **"Next"** → **"Finish"**

4. **Wait for download and installation** (5-10 minutes)

---

## STEP 2: Set Environment Variables (PATH)

This tells Windows where to find the `g++` compiler.

### Windows 10/11 Steps:

1. **Open Environment Variables:**
   - Press **Windows Key + R**
   - Type: `sysdm.cpl`
   - Press **Enter**
   - Click **"Environment Variables"** button (bottom right)

2. **Edit System PATH:**
   - Under **"System variables"**, find and click **"Path"**
   - Click **"Edit"**

3. **Add MinGW Path:**
   - Click **"New"**
   - Copy-paste: `C:\Program Files\mingw-w64\x86_64-14.1-posix-dwarf-rt_v12-rev0\bin`
   - Click **"OK"**

4. **Apply Changes:**
   - Click **"OK"** on all windows
   - **Restart your computer** (important!)

### Verify Installation:

After restart, open **Command Prompt** and type:
```bash
g++ --version
```

**Expected Output:**
```
g++ (x86_64-posix-dwarf-rev0, Built by MinGW-W64 project) 14.1.0
```

If you see a version number, ✅ **MinGW is installed correctly!**

---

## STEP 3: Install VS Code Extensions

You need 2 extensions for C++ support and easy compilation:

### Extension 1: C/C++ (Official Microsoft Extension)

1. Open **VS Code**
2. Click **Extensions icon** (left sidebar) or press `Ctrl + Shift + X`
3. Search: `C/C++`
4. Click the **first result** (by Microsoft)
5. Click **"Install"**
6. Wait for installation to complete

### Extension 2: Code Runner

1. In the Extensions tab, search: `Code Runner`
2. Click the **first result** (by Jun Han)
3. Click **"Install"**
4. Wait for installation to complete

**Result:** You'll see a ▶️ **Run Code** button in the top-right corner of any C++ file!

---

## STEP 4: Create Project Folder Structure

This creates an organized workspace for DSA practice.

### Using File Explorer:

1. Navigate to: `C:\Users\sahuv\OneDrive\Desktop\C++`
2. Create a new folder named: `dsa_practice`
3. Inside `dsa_practice`, create these subfolders:
   - `arrays`
   - `linked_lists`
   - `stacks`
   - `queues`
   - `trees`
   - `sorting`
   - `searching`
   - `graphs`

### Folder Structure:
```
dsa_practice/
├── arrays/
├── linked_lists/
├── stacks/
├── queues/
├── trees/
├── sorting/
├── searching/
└── graphs/
```

---

## STEP 5: Create First C++ File (main.cpp)

1. Open **VS Code**
2. Click **File** → **Open Folder**
3. Select: `C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice`
4. Click **"Select Folder"**
5. In the Explorer panel (left), click **New File** icon
6. Name it: `main.cpp`
7. Copy-paste this code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello! C++ DSA Setup Complete!" << endl;
    cout << "Ready for DSA problems!" << endl;
    
    return 0;
}
```

8. **Save:** `Ctrl + S`

---

## STEP 6: Compile and Run Using Run Button (Code Runner)

### Using the Run Button (Easiest):

1. Open `main.cpp`
2. Look at the **top-right corner** → You'll see a **▶️ Run Code** button
3. Click it!
4. **Output appears in bottom panel** (Output tab)

**Expected Output:**
```
Hello! C++ DSA Setup Complete!
Ready for DSA problems!
```

### Using Terminal (Alternative):

1. Open **Terminal** in VS Code: `Ctrl + ` (backtick)
2. Type:
   ```bash
   g++ -o main main.cpp
   .\main.exe
   ```
3. Output appears in terminal

---

## STEP 7: Configure VS Code for Better C++ Support

This makes VS Code highlight errors and provide better autocomplete.

### Create `.vscode/c_cpp_properties.json`:

1. In VS Code, create a folder: `.vscode` (with dot)
2. Inside `.vscode`, create file: `c_cpp_properties.json`
3. Copy-paste this:

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "compilerPath": "C:\\Program Files\\mingw-w64\\x86_64-14.1-posix-dwarf-rt_v12-rev0\\bin\\g++.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```

4. **Save:** `Ctrl + S`

### Create `.vscode/settings.json`:

1. In `.vscode` folder, create: `settings.json`
2. Copy-paste this:

```json
{
    "code-runner.executorMap": {
        "cpp": "cd $dir && g++ -o $fileNameWithoutExt $fileName && $fileNameWithoutExt"
    },
    "code-runner.runInTerminal": true,
    "C_Cpp.default.compilerPath": "C:\\Program Files\\mingw-w64\\x86_64-14.1-posix-dwarf-rt_v12-rev0\\bin\\g++.exe"
}
```

3. **Save:** `Ctrl + S`

4. **Restart VS Code** (Close and Open)

---

## STEP 8: Fix Common Errors

### Error 1: "g++ is not recognized"

**Cause:** Environment variables not set or system not restarted

**Solution:**
1. Verify PATH is set (STEP 2)
2. **Restart computer**
3. Open new Command Prompt and try: `g++ --version`

### Error 2: Code Runner shows "command not found"

**Solution:**
1. Check that `Code Runner` extension is installed
2. Restart VS Code
3. Make sure file is `.cpp` (not `.txt`)
4. Click the ▶️ button again

### Error 3: "No such file or directory"

**Solution:**
- Make sure terminal is in correct folder
- Use command: `cd C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice`

---

## STEP 9: Test Complete Setup

### Test 1: Run Button Test

Create file: `arrays/binary_search.cpp`

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int target = 5;
    
    cout << "Binary Search Example" << endl;
    cout << "Array: 1 3 5 7 9" << endl;
    cout << "Target: " << target << endl;
    cout << "Found at index 2" << endl;
    
    return 0;
}
```

Click **▶️ Run Code** → Should output successfully ✅

### Test 2: Terminal Test

Open Terminal: `Ctrl + ` (backtick)

```bash
cd arrays
g++ -o binary_search binary_search.cpp
.\binary_search.exe
```

Should output successfully ✅

---

## STEP 10: Ready for DSA Problems!

### Template for Every Problem:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write your solution here
    
    cout << "Your output here" << endl;
    
    return 0;
}
```

### Useful Includes for DSA:

```cpp
#include <iostream>      // Basic I/O
#include <vector>        // Dynamic arrays
#include <algorithm>     // sort, binary_search, etc.
#include <queue>         // Queue operations
#include <stack>         // Stack operations
#include <map>           // Hash maps
#include <set>           // Sets
#include <string>        // String operations
#include <cmath>         // Math functions
```

---

## Quick Reference

| Task | Command |
|------|---------|
| Check compiler | `g++ --version` |
| Compile | `g++ -o output main.cpp` |
| Run | `.\output.exe` |
| Compile + Run | `g++ -o main main.cpp && .\main.exe` |
| Run button | Click ▶️ in VS Code |

---

## Troubleshooting Checklist

- [ ] MinGW installed? (`g++ --version` works)
- [ ] PATH set correctly? (Restarted computer?)
- [ ] VS Code extensions installed? (C/C++ + Code Runner)
- [ ] Created `.vscode/` folder with JSON files?
- [ ] File is `.cpp` format?
- [ ] Saved the file before running?

---

## You're All Set! 🎉

You now have a complete C++ DSA development environment ready for placement preparation!

**Next Steps:**
1. Create problems in each subfolder
2. Use the ▶️ Run button to quickly test code
3. Practice DSA problems daily
4. Build your portfolio!

**Good luck with your DSA preparation!** 💪

