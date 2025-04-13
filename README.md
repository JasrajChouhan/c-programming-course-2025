
# C Programming Course 2025

## FAQ

### How do I run a `.c` file?

C is a compiled language, which means the source code must be compiled before it can be executed. In this course, we use the **MinGW** compiler.

>Note: `g++` is for C++ files. For C programs, use `gcc`.

#### ✅ Steps to compile and run a `.c` file:

1. **Open the terminal (or Command Prompt).**

2. **Compile the `.c` file using `gcc`:**
   ```bash
   gcc <file_name>.c -o <output_name>
   ```
   Example:
   ```bash
   gcc hello.c -o hello
   ```

3. **Run the compiled program:**

   - **On Linux/Mac:**
     ```bash
     ./hello
     ```

   - **On Windows (Command Prompt or PowerShell):**
     ```bash
     hello.exe
     ```

---

#### 🔧 Example on Windows using MinGW:
```bash
gcc hello.c -o hello.exe
hello.exe
```

#### 🐧 Example on Linux/Mac:
```bash
gcc hello.c -o hello
./hello
```

