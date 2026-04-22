# 📚 C++ DSA Complete Setup - START HERE

Welcome! This folder contains everything you need for complete C++ DSA setup on Windows.

---

## 🎯 Choose Your Starting Point

### 👨‍🎓 For Beginners (First Time Setup)
**Start with:** [CPP_SETUP_GUIDE.md](CPP_SETUP_GUIDE.md)
- Detailed step-by-step instructions
- Screenshots and examples
- Troubleshooting for common issues
- **Time needed:** 20-30 minutes

### ✅ After Installation (Verify Setup)
**Use:** [INSTALLATION_CHECKLIST.md](INSTALLATION_CHECKLIST.md)
- Verify each step was done correctly
- Quick verification commands
- Common issues and fixes
- **Time needed:** 5-10 minutes

### ⚡ Quick Reference (Already Installed?)
**Check:** [VISUAL_SUMMARY.md](VISUAL_SUMMARY.md)
- Visual diagrams and flowcharts
- Quick reference tables
- File locations and structure
- Workflow examples
- **Time needed:** 2-5 minutes

### 💻 Start Coding Now
**Open:** [dsa_practice/README.md](dsa_practice/README.md)
- Project structure overview
- How to run C++ files
- Templates for new problems
- **Time needed:** 2 minutes

---

## 📂 What's Included

### Documentation Files
```
📄 CPP_SETUP_GUIDE.md           (10-step detailed guide)
📄 INSTALLATION_CHECKLIST.md    (Verification & testing)
📄 VISUAL_SUMMARY.md            (Quick reference & diagrams)
📄 INDEX.md                     (This file)
```

### Practice Folder
```
📁 dsa_practice/
   ├── main.cpp                 (Test file to verify setup)
   ├── README.md                (Project guide)
   ├── .vscode/                 (VS Code configuration)
   │   ├── c_cpp_properties.json
   │   └── settings.json
   │
   ├── arrays/                  (Array problems)
   ├── sorting/                 (Sorting algorithms)
   ├── searching/               (Search algorithms)
   ├── stacks/                  (Stack problems)
   ├── queues/                  (Queue problems)
   ├── linked_lists/            (Linked list problems)
   ├── trees/                   (Tree problems)
   └── graphs/                  (Graph problems)
```

---

## 🚀 Quick Start (5 Minutes)

### If MinGW is NOT installed:
1. **Read:** [CPP_SETUP_GUIDE.md](CPP_SETUP_GUIDE.md) - Steps 1-2
2. **Download & Install:** MinGW-w64 compiler
3. **Set PATH:** Environment variables
4. **Restart** computer
5. **Continue** to step 4 below

### If MinGW IS installed:
1. **Install Extensions:** VS Code - C/C++ and Code Runner
2. **Open Folder:** `dsa_practice` in VS Code
3. **Test:** Open `main.cpp` → Click ▶️ Run Code
4. **Success:** See output in terminal ✅

---

## ✨ Key Features of This Setup

✅ **Run Button Support** - Click ▶️ to compile and run instantly
✅ **Beginner Friendly** - No CMake, no complex configuration
✅ **Organized Folders** - One folder per DSA topic
✅ **Sample Code** - Example programs for each topic
✅ **VS Code Integration** - Full IDE support with autocomplete
✅ **Windows Optimized** - PowerShell batch scripts
✅ **Comprehensive Guides** - Multiple learning formats

---

## 📋 Installation Steps (Summary)

| Step | Action | Time | Status |
|------|--------|------|--------|
| 1 | Install MinGW-w64 | 5-10 min | ⭕ |
| 2 | Set PATH Variable | 2 min | ⭕ |
| 3 | Restart Computer | 1 min | ⭕ |
| 4 | Install VS Code Extensions | 2 min | ⭕ |
| 5 | Reload VS Code | 1 min | ⭕ |
| 6 | Open dsa_practice folder | 1 min | ⭕ |
| 7 | Test with ▶️ button | 1 min | ⭕ |
| **TOTAL** | **Complete Setup** | **~22 min** | ✅ |

---

## 🔍 Verification Commands

Test if setup is working:

```bash
# Check compiler
g++ --version

# Should show: g++ (x86_64-posix-dwarf-rev0...) 14.1.0

# Test compilation
cd C:\Users\sahuv\OneDrive\Desktop\C++\dsa_practice
g++ -o test main.cpp
.\test.exe

# Should output: Hello! C++ DSA Setup Complete!
```

---

## 🎓 Learning Path

### Phase 1: Setup & Basics
- [ ] Read [CPP_SETUP_GUIDE.md](CPP_SETUP_GUIDE.md)
- [ ] Complete INSTALLATION_CHECKLIST.md
- [ ] Test main.cpp with ▶️ button
- [ ] Understand [VISUAL_SUMMARY.md](VISUAL_SUMMARY.md)

### Phase 2: Arrays & Searching
- [ ] Solve: linear_search.cpp
- [ ] Solve: binary_search.cpp
- [ ] Solve: 5+ array problems
- [ ] Create own array problems

### Phase 3: Sorting Algorithms
- [ ] Learn: bubble_sort.cpp
- [ ] Implement: quick_sort, merge_sort
- [ ] Time complexity analysis
- [ ] Practice 5+ sorting problems

### Phase 4: Data Structures
- [ ] Stacks: stack_example.cpp
- [ ] Queues: queue_example.cpp
- [ ] Linked Lists: implementation
- [ ] Trees: binary search trees

### Phase 5: Advanced
- [ ] Graphs: BFS, DFS
- [ ] Dynamic Programming
- [ ] Backtracking
- [ ] Mock interviews

---

## 🆘 Troubleshooting

### Problem: "g++ is not recognized"
```
Solution:
1. Verify MinGW is installed: C:\Program Files\mingw-w64\
2. Verify PATH is set in Environment Variables
3. Restart computer (IMPORTANT!)
4. Open NEW Command Prompt
5. Try: g++ --version
```

### Problem: "No Run Code button in VS Code"
```
Solution:
1. Install Code Runner extension
2. Make sure file is .cpp (not .txt)
3. Reload VS Code: Ctrl + Shift + P → Reload
```

### Problem: "Compilation failed"
```
Solution:
1. Check C++ syntax (semicolons, brackets)
2. Save file: Ctrl + S
3. Check includes are correct
4. Try: g++ -Wall -o output filename.cpp (shows all errors)
```

---

## 📚 Additional Resources

### Official Documentation
- **C++ Reference:** https://cppreference.com
- **VS Code C++ Docs:** https://code.visualstudio.com/docs/languages/cpp
- **MinGW-w64 Project:** https://www.mingw-w64.org/

### Online Judges for Practice
- **LeetCode:** https://leetcode.com
- **HackerRank:** https://www.hackerrank.com
- **CodeChef:** https://www.codechef.com
- **Codeforces:** https://codeforces.com

### DSA Resources
- **GeeksforGeeks:** https://www.geeksforgeeks.org
- **Programiz:** https://www.programiz.com/dsa
- **InterviewBit:** https://www.interviewbit.com

---

## 📝 Code Templates

### Basic Template
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello DSA!" << endl;
    return 0;
}
```

### With Vector
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
```

### With Sorting
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    sort(arr.begin(), arr.end());
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
```

---

## ⏱️ Recommended Study Schedule

**Week 1:** Setup & Arrays (10-15 hours)
**Week 2-3:** Sorting & Searching (10-15 hours)
**Week 4-5:** Stacks & Queues (10-15 hours)
**Week 6-7:** Linked Lists (10-15 hours)
**Week 8-9:** Trees (15-20 hours)
**Week 10-11:** Graphs (15-20 hours)
**Week 12:** Advanced Topics & Practice

**Total:** 80-130 hours for solid DSA foundation

---

## ✅ Checklist for Success

- [ ] MinGW compiler installed and working
- [ ] PATH environment variable set correctly
- [ ] Computer restarted after PATH change
- [ ] C/C++ extension installed in VS Code
- [ ] Code Runner extension installed in VS Code
- [ ] dsa_practice folder opened in VS Code
- [ ] main.cpp runs successfully with ▶️ button
- [ ] Understand folder structure
- [ ] Ready to create new problems
- [ ] Set weekly practice goals

---

## 🎉 You're All Set!

**Choose your starting point above and begin your DSA journey!**

### Next Action:
👉 **Read:** [CPP_SETUP_GUIDE.md](CPP_SETUP_GUIDE.md) if this is your first time
👉 **Or Open:** `dsa_practice` folder in VS Code if already installed

---

## 💡 Pro Tips

1. **Create one file per problem** - Easier to manage
2. **Use meaningful filenames** - `binary_search.cpp` not `problem1.cpp`
3. **Add comments** - Explain your algorithm logic
4. **Test with samples** - Use different test cases
5. **Time your solutions** - Track improvement
6. **Review often** - Revisit old problems weekly
7. **Solve by hand first** - Then code the solution

---

**Good luck with your placement preparation! 🚀**

*Last Updated: April 18, 2026*
