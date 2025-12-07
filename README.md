---

# **File Encryptor Tool (XOR Cipher)**

A simple, lightweight, and educational **file encryption & decryption tool in C**, built as a mini–project for **Logic Building With Computer Programming** at **Shoolini University**.

This tool encrypts and decrypts any file—text or binary—using a classic **XOR cipher** with a user-defined integer key.
Perfect for beginners learning file handling, bitwise operations, and modular programming in C.

---

## 🚀 **Features**

* 🔐 Encrypt any file with a custom XOR key
* 🔓 Decrypt using the same key (symmetric encryption)
* 👀 Safely view file contents
* 💻 Works on Windows, Linux, and macOS
* 🧩 Modular code with separate `.c` & `.h` files
* 🎨 Clean, user-friendly menu interface
* ⚠️ Proper error handling & input validation

---

## 📁 **Project Structure**

```
FileEncryptor/
├── main.c          → Main program & menu logic
├── encrypt.c       → Encryption/decryption algorithms
├── encrypt.h       → Prototypes for encryption functions
├── fileops.c       → File validation & content display
├── fileops.h
├── ui.c            → Menu, screen clear, pause
├── ui.h
├── file.txt        → Sample input file
└── README.md
```

---

## 🛠️ **How to Compile & Run**

### **1. Compile the project**

```bash
gcc *.c -o encryptor
```

### **2. Run the executable**

**Linux/macOS**

```bash
./encryptor
```

**Windows**

```bash
encryptor.exe
```

---

## 📌 **Sample Usage**

1. **Encrypt a file**
   Input: `file.txt`
   Output: `encrypted.bin`
   Key: `42`

2. **Decrypt a file**
   Input: `encrypted.bin`
   Output: `original.txt`
   Key: `42`

3. **View file content**

---

## 🖥️ **Sample Program Output**

```
========================================
        FILE ENCRYPTOR TOOL
========================================
1. Encrypt a file
2. Decrypt a file
3. View file content
4. Exit
========================================
Enter your choice: 1

Enter input filename: file.txt
Enter output filename: secret.bin
Enter encryption key (integer): 42
File encrypted successfully!

Press Enter to continue...
```

---

## 👨‍💻 **Author**

**Soham Thakur**
Roll No: **GF202570878**
B.Tech CSE
Shoolini University, Solan (H.P.)

**Guide:** Mr. Anurag Rana
**Subject:** Logic Building With Computer Programming
**Year:** 2025

⭐ *If you find this useful, give it a star on GitHub!*

---

# ✅ **Short GitHub Description**

Use this for the GitHub repo subtitle:

**“A lightweight C-based file encryption & decryption tool using the XOR cipher — great for learning file handling, bitwise operations, and modular programming.”**

If you want an even shorter one:

**“C program for XOR-based file encryption/decryption with a clean menu-driven interface.”**

---

If you'd like, I can also:
✔ generate shields/badges
✔ create a project logo/banner
✔ write installation instructions
✔ add screenshots

Just tell me!
