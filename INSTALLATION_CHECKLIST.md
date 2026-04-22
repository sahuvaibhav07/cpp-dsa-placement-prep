# MinGW-w64 Installation Checklist

Complete each step to verify your setup:

## ✅ Step-by-Step Installation Verification

### 1. MinGW Installation
- [ ] Downloaded MinGW-w64 installer from https://www.mingw-w64.org/
- [ ] Installed to default location: `C:\Program Files\mingw-w64\`
- [ ] Selected x86_64 architecture
- [ ] Installation completed successfully

### 2. Environment Variables (PATH)
- [ ] Opened System Environment Variables (`sysdm.cpl`)
- [ ] Added MinGW bin path to System PATH
- [ ] Restarted computer after setting PATH
- [ ] Verified with: `g++ --version` in new Command Prompt

### 3. VS Code Extensions
- [ ] Installed **C/C++** extension (Microsoft)
- [ ] Installed **Code Runner** extension (Jun Han)
- [ ] Restarted VS Code
- [ ] See ▶️ Run Code button in editor

### 4. Project Setup
- [ ] Created `dsa_practice` folder
- [ ] Created subfolders (arrays, sorting, etc.)
- [ ] Created `.vscode` folder with JSON config files
- [ ] Folder structure matches the template

### 5. Testing
- [ ] Opened `dsa_practice` folder in VS Code
- [ ] Created `main.cpp` with test code
- [ ] Clicked ▶️ Run Code button
- [ ] Program executed successfully
- [ ] Output visible in terminal

---

## 🔍 Verification Commands

Run these in Command Prompt to verify installation:

```bash
# Check MinGW version
g++ --version

# Check compiler path
where g++

# Test compilation
cd C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice
g++ -o test main.cpp
.\test.exe
```

**Expected Output:**
```
g++ (x86_64-posix-dwarf-rev0, Built by MinGW-W64 project) 14.1.0
```

---

## 🚨 Common Issues & Fixes

| Issue | Cause | Fix |
|-------|-------|-----|
| "g++ not recognized" | PATH not set | Restart computer, verify path |
| No ▶️ button in VS Code | Extension not installed | Install Code Runner extension |
| "No such file or directory" | Wrong directory | Change to correct folder first |
| Compilation fails | Syntax error in code | Check C++ syntax |
| "Command not found" | PATH issue | Run `g++ --version` to test |

---

## 📋 File Checklist

Required files in `dsa_practice` folder:

```
dsa_practice/
├── README.md ✅
├── main.cpp ✅
├── .vscode/
│   ├── c_cpp_properties.json ✅
│   └── settings.json ✅
├── arrays/
│   └── linear_search.cpp ✅
├── sorting/
│   └── bubble_sort.cpp ✅
└── [other folders] ✅
```

---

## ✨ You're Ready When:

✅ `g++ --version` shows a version number
✅ VS Code has ▶️ Run Code button
✅ `main.cpp` runs successfully with one click
✅ Output appears in terminal

**All set for DSA practice!** 🎉
